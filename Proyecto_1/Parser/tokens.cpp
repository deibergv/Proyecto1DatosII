//
// Created by kisung on 20/04/18.
//

#include "tokens.h"

TokenObject::TokenObject(string argu) {
    this->value=argu;
    this->type= toToken(argu);
}

Tokens TokenObject::toToken(string argu) {
    string types[] = {"int","float","double","char","long"};
    for (string i: types) {
        if (i == argu) {
            return IDENT;
        }
    }

    if(argu == "=") {
        return ASSIGN;

    } else if(argu == ";") {
        return ENDLINE;

    } else if(argu == "{") {
        return STRSCOPE;

    } else if (argu == "}") {
        return ENDSCOPE;
    } else if (argu == "struct") {
        return STRUCT;
    } else if (argu == "reference") {
        return REF;
    } else if (argu == "print") {
        return PRINT;
    } else if (argu == "<") {
        return REFS;
    } else if (argu == ">") {
        return REFE;
    } else if (argu == "getAddr") {
        return ADDR;
    } else if (argu == "getValue") {
        return VALUE;
    } else {
        regex regexIdentifier("[_a-zA-Z][_a-zA-Z0-9]*");
        if (regex_match(argu, regexIdentifier)) {
            return KEYWORD;
        }

        regex r("\'[A-Za-z]\'");
        if (regex_match(argu, r)) {
            return CHAR;
        }

        regex regexNumber("[-+]?[0-9]*.?[0-9]*");
        if (regex_match(argu, regexNumber)) {
            return NUMB;
        }
    }
}

//void tokens::clear() {
//    tokuon.clear();
//    type.clear();
//    prior.clear();
//}
//
//string tokens::getToken(int index) {
//    if(index < 0 || index >= getSize()){
//        cout << index << "/" << getSize()-1 <<endl;
//        return ".none.";
//
//
//    }
//    return tokuon[index];
//}
//
//void tokens::addToken(string token) {
//    tokuon.push_back(token);
////    type.push_back(tokenType);
//}
//
//int tokens::getSize() {
//    return (int)tokuon.size();
//}




