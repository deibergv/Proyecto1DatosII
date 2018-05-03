//
// Created by kisung on 21/04/18.
//

#ifndef PROYECTO_1_CLIENT_H
#define PROYECTO_1_CLIENT_H

#include <iostream>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <unistd.h>
#include <netdb.h>
#include "loguru.h"
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

class Client {
public:
    Client();
    void closeClient();
    void sendJson(json j1);
    void getData(string name);

    json jsonGeneral;

private:
    int client;
    int portNum = 1500; // NOTE that the port number is same for both client and server
    bool isExit = false;
    int bufsize = 1024;
    char buffer[1024];
    char* ip = "127.0.0.1";
    bool message = true;

    struct sockaddr_in server_addr;
};

#endif //PROYECTO_1_CLIENT_H
