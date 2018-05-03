#include "Client.h"


Client::Client() {

    client = socket(AF_INET, SOCK_STREAM, 0);

    /* ---------- ESTABLISHING SOCKET CONNECTION ----------*/
    /* --------------- socket() function ------------------*/

    if (client < 0)
    {
        LOG_F(ERROR,"Error establishing socket...");
        exit(1);
        return;
    }

    /*
        The socket() function creates a new socket.
        It takes 3 arguments,
    */

    LOG_F(INFO,"=> Socket client has been created...");

    /*
        The variable serv_addr is a structure of sockaddr_in.
        sin_family contains a code for the address family.
        It should always be set to AF_INET.

        htons() converts the port number from host byte order
        to a port number in network byte order.

    */

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(portNum);

    // this function returns returns 1 if the IP is valid
    // and 0 if invalid
    // inet_pton converts IP to packets
    // inet_ntoa converts back packets to IP
    //inet_pton(AF_INET, ip, &server_addr.sin_addr);

    /* ---------- CONNECTING THE SOCKET ---------- */
    /* ---------------- connect() ---------------- */

    if (connect(client,(struct sockaddr *)&server_addr, sizeof(server_addr)) == 0) {
        LOG_F(INFO,"=> Connection to the server port number: " + portNum);
    }
    /*
        The connect function is called by the client to
        establish a connection to the server. It takes
        three arguments, the socket file descriptor, the
        address of the host to which it wants to connect
        (including the port number), and the size of this
        address.
    */
    recv(client, buffer, bufsize, 0);
    LOG_F(INFO,"=> Connection confirmed, you are good to go...");

}

void Client::closeClient() {
    /* ---------------- CLOSE CALL ------------- */
    /* ----------------- close() --------------- */
    close(client);
}

// formato json {"tipo":"i","valor":2,"etiqueta":"a"}
//Prueba {"tipo":"i","valor":1,"etiqueta":"myname"}
void Client::sendJson(json j1) {
    cout << "at least here"<< endl;
    message = true;
    do {

        string jString = j1.dump();
        strcpy(buffer,jString.c_str());

        send(client, buffer, bufsize, 0);
        message = false;
    } while (message);
    do {
        message = true;
        recv(client, buffer, bufsize, 0);
        json j = json::array();
        j = json::parse(buffer);

//        string types[] = {"int","float","double","char","long"};
//        for (string type: types) {
//            if (j["tipo"] == type) {
                message = false;
//                jsonGeneral = j;
//            }
//        }

    } while (message);
}

void Client::getData(string name) {

}
