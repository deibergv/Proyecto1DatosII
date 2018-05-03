//
// Created by kisung on 20/04/18.
//

#ifndef FORPARSER_CPSEUDOPARSER_H
#define FORPARSER_CPSEUDOPARSER_H

#include <iostream>
#include <vector>
#include "tokens.h"
#include <boost/tokenizer.hpp>
#include <nlohmann/json.hpp>
#include "Client/Client.h"

using namespace std;
using json = nlohmann::json;

class Parser {
public:

//    json gain;

    Client *client = new Client();

    vector<TokenObject *> *TokenObjects;

    vector<TokenObject *> *getTokens(string exp);

    void parseCode(string exp);

    void analizeTokens(vector<TokenObject *> *currentTokens);

    void clearParser();

    Parser();
};


#endif //FORPARSER_CPSEUDOPARSER_H
