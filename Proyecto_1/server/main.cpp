#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

using namespace std;
using json = nlohmann::json;

#include "mserver.h"

int main() {

//    json j;
//    j["tipo"] = "i";
//    j["valor"] = { 1, 2, 3 };
//    j["etiqueta"] = "num1";
//    string b = j["tipo"];
//    json array = json::array();
//    array.insert(array.end(),j);
//    array.insert(array.end(),j);
//    array.insert(array.end(),j);
//    cout << j << endl;
//    cout << j.dump() << endl;
//    for (json j: array) {
//        cout << j;
//    }
    mserver *server1 = new mserver(10024,1500);

//    void* memory = malloc(sizeof(char)*1024);
//    int a = 8;
//    long b = 1;
//    float c = 1.2;
//    double d = 2.2;
//    char e = 'a';
//    string array[18];
//
//    *(int *)(memory+0) = a;
//    *(long *)(memory+ sizeof(int)) = b;
//    *(float *)(memory + sizeof(int) + sizeof(long)) = c;
//
//    cout << *(int *)(memory+0) << endl;
//    cout << *(long *)(memory+ sizeof(int)) << endl;
//    cout << *(float *)(memory+ sizeof(int) + sizeof(long)) << endl;
//    array[0] = static_cast<std::ostringstream&>(
//            std::ostringstream() << &*(float *)(memory+ sizeof(int) + sizeof(long))
//    ).str();
//    cout << &*(float *)(memory+ sizeof(int) + sizeof(long)) << endl;
//    cout << array[0] <<endl;
//
//    return 0;
}