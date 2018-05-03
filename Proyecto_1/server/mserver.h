//
// Created by kisung on 10/04/18.
//

#include <iostream>
#include <cstring>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <cstdlib>
#include <unistd.h>
#include <nlohmann/json.hpp>
#include <string>
#include "linkedlist.cpp"

#ifndef SERVER_MSERVER_H
#define SERVER_MSERVER_H

using namespace std;
using json = nlohmann::json;


class mserver {

    /* ---------- Inicializacion de variables ---------- */

    /*
       1. client/server son dos archivos descriptores
       Estas dos variables almacenan los valores retornados
       por el llamado del socket del sistema y el llamado
       del sistema de aceptacion.

       2. portNum es para guardar el numero de puerto donde
       se acepta la coneccion.

       3. isExit es una variable booleana que se usara para
       terminar el loop.

       4. El servidor lee caracteres desde el socket
       en una variable dinamica (buffer).

       5. Un sockaddr_in es una estructura que contiene una direccion
       en internet. Esta estructura ya esta definida en netinet/in.h,
       por eso no es necesario declararla otra vez.

       DEFINITION:

        struct sockaddr_in
        {
          short   sin_family;
          u_short sin_port;
          struct  in_addr sin_addr;
          char    sin_zero[8];
        };

       6. serv_addr va a contener la direccion del servidor

       7. socklen_t es un tipo intr de por lo menos 32 bits de largo.*/

private:
    int client, server;
    int portNum;
    bool isExit = false;
    const int buffsize = 1024;
    char buffer[1024];
    void *memory;
    bool message = true;
    int posSum;
    string types[100];

    LinkedList<int>* position = new LinkedList<int>();
    LinkedList<string>* names = new LinkedList<string>();
    LinkedList<int>* references = new LinkedList<int>();

    struct sockaddr_in server_addr;
    socklen_t size;

    void allocateVar(json j);
    json getVar(string eti);
    json getAll();

public:
    mserver(int totalMem, int port);
};


#endif //SERVER_MSERVER_H
