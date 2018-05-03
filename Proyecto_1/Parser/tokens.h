//
// Created by kisung on 20/04/18.
//

#ifndef FORPARSER_TONKENS_H
#define FORPARSER_TONKENS_H

#include <iostream>
#include <vector>
#include <regex>

using namespace std;

enum Tokens {
    NONE = 0,
    IDENT = 1, // identificador int, float, long, double, char,
    KEYWORD = 2, // palabra clave
    ASSIGN = 3, // "="
    NUMB = 4, // [0-9] para int, float, long, double
    CHAR = 5, // [a-z][A-Z] para char variable
    ENDLINE = 6, // ";"
    STRSCOPE = 7, // "{"
    ENDSCOPE = 8, // "}"
    STRUCT = 9, // identificador para struct
    REF = 10, // identificador para reference<type>
    PRINT = 11, // funcion print para las salidas
    VALUE = 12, // operador getValue.
    ADDR = 13, // operador getAddr
    REFS = 14, // "<"
    REFE =15 // ">"
};

class TokenObject {
private:

    Tokens toToken(string argu);

public:

    string value;
    Tokens type;

    explicit TokenObject(string value);

    static int linenumber;

};


#endif //FORPARSER_TONKENS_H
