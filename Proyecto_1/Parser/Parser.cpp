//
// Created by kisung on 20/04/18.
//

#include "Parser.h"

vector<TokenObject *> *Parser::getTokens(string exp) {
    using namespace boost;
    typedef tokenizer<char_separator<char>> tokenizer;

    char_separator<char> separator(" ", "\n+-/*%;{}<>()", drop_empty_tokens);

    auto *result = new vector<TokenObject *>();

    tokenizer tokens(exp, separator);

    for (tokenizer::iterator beg = tokens.begin(); beg != tokens.end(); ++beg) {
        result->push_back(new TokenObject(*beg));
    }
    return result;
}

void Parser::parseCode(string code) {

    if (TokenObjects == nullptr) {
        TokenObjects = getTokens(code);
    }

    analizeTokens(TokenObjects);

}

// formato json normal {"tipo":"int","valor":2,"etiqueta":"a"}
// formato referencia {"tipo":"reference","clase":"int","etiqueta":"a","valor":"(nombre del valor)"}
// formato struct {"tipo":"struct","valor":[(lista de jsons)],"etiqueta":"a"}

void Parser::analizeTokens(vector<TokenObject *> *tokens) {
    json j;
    bool toPrint = false;
//    int tokensCounted = 0;

    int REFERENCE = REF * REFS * IDENT * REFE;

    int counter = 0;

    TokenObject * anterior;

    for (auto &&token:*tokens) {
//        tokensCounted++;
        if (token->type == IDENT ) {
            /*if (anterior->type == REFS) {
                j["clase"] = token-> value;
                anterior = token;
            } else */if (counter!=0){
                //error
                return;
            } else {
                j["tipo"] = token->value;
                anterior = token;
                cout<< "aqui tambien paso"<< endl;
            }
        } else if (token -> type == REF) {
            if (counter!= 0) {
                //error
                return;
            } else {
                j["tipo"] = token ->value;
                anterior = token;
            }
        } else if (token -> type == PRINT) {
            if (counter!=0) {
                //error
                return;
            } else {
                toPrint = true;
            };
        } else if (token -> type == KEYWORD) {
            if (toPrint) {
                j["etiqueta"] = token->value;
                anterior = token;
                // metodos de imprimir
            } /*else if (counter == 0 or anterior->type == ASSIGN) {
                if (counter = 0){
                    //error
                    return;
                }
            } */else {
                j["etiqueta"] = token->value;
                anterior = token;
            }
        } else if (token -> type == STRUCT) {
            if (counter!= 0) {
                //error
                return;
            } else {
                j["tipo"] = token -> value;
                anterior = token;
            }
        } else if (token -> type == STRSCOPE) {
            if (counter = 0) {
                // in scope en json
            } else if (anterior -> type == ASSIGN) {
                //j["valor"] = json::array();
            } else {
                //error
                return;
            }
        } else if (token -> type == ENDSCOPE) {
            if (counter = 0) {
                // in scope en json
            } else if ((*tokens)[counter+1]->type == ENDLINE) {
                //j["valor"] = json::array();
            } else {
                //error
                return;
            }
        } else if (counter!=0 and token -> type == NUMB) {
            if (anterior -> type == ASSIGN) {
                j["valor"] = token -> value;
                cout << token -> value << endl;
                anterior = token;
            } else {
                //error
//                tokens->erase(tokens->begin(), tokens->begin() + counter);
                return;
            }
        } else if (counter!=0 and token -> type == CHAR) {
            if (anterior -> type == ASSIGN) {
                j["valor"] = token -> value;
                anterior = token;
            } else {
                //error
//                tokens->erase(tokens->begin(), tokens->begin() + counter);
                return;
            }
        } else if (counter!=0 and token -> type == ASSIGN) {
            if (anterior -> type == KEYWORD) {
                anterior = token;
            } else {
                //error
//                tokens->erase(tokens->begin(), tokens->begin() + counter);
                return;
            }
        } else if (counter!=0 and token -> type == ADDR) {
            if (anterior -> type == KEYWORD) {
                if (j["tipo"] == "reference") {
                    j["etiqueta"] = anterior->value;
                    anterior = token;
                } else {
//                    tokens->erase(tokens->begin(), tokens->begin() + counter);
                    //error
                    return;
                }
            } else {
//                tokens->erase(tokens->begin(), tokens->begin() + counter);
                //error
                return;
            }
        } else if (counter!=0 and token -> type == VALUE) {
            if (anterior -> type == KEYWORD) {
                j["etiqueta"] = anterior -> value;
                anterior = token;
            } else {
//                tokens->erase(tokens->begin(), tokens->begin() + counter);
                //error
                return;
            }
        } else if (token -> type == REFS) {
            if (anterior -> type == REFERENCE) {
                anterior = token;
            } else {
//                tokens->erase(tokens->begin(), tokens->begin() + counter);
                //error
                return;;
            }
        } else if (token -> type == REFE) {
            if (anterior -> type == IDENT) {
                anterior = token;
            } else {
//                tokens->erase(tokens->begin(), tokens->begin() + counter);
                //error
                return;
            }
        } else if (token -> type == ENDLINE) {
            if (counter == tokens->size()-1) {
                client->sendJson(j);
                //gain = client->jsonGeneral;
                cout << "en el envio" << endl;
//                tokens->erase(tokens->begin(), tokens->begin() + counter);
            } else {
                //error
                return;
            }
        } else {
            tokens->erase(tokens->begin(), tokens->begin() + counter);
            //error
            return;
        }
        counter ++;
    }
    tokens->erase(tokens->begin(), tokens->begin() + counter);

}

Parser::Parser() {
    TokenObjects = nullptr;
}

void Parser::clearParser() {
    TokenObjects = nullptr;
}