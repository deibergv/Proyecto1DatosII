//
// Created by kisung on 10/04/18.
//

#include "mserver.h"

mserver::mserver(int totalMem, int port) {

    /* ---------- Estableciendo coneccion con el socket ----------*/
    client = socket(AF_INET, SOCK_STREAM, 0);
    /*
        The socket(address domain, socket type, protocol)
        function creates a new socket.

            This will return a small integer and is used for all
            references to this socket. If the socket call fails,
            it returns -1.

    */

    portNum = port;
    memory = malloc(sizeof(char)*totalMem);

    if (client < 0) {
        cout << "\nError establishing socket..." << endl;
        exit(1);
    }
    cout << "\n=> Socket server has been created..." << endl;

    /*
        The variable serv_addr is a structure of sockaddr_in.
        sin_family contains a code for the address family.
        It should always be set to AF_INET.

        INADDR_ANY contains the IP address of the host. For
        server code, this will always be the IP address of
        the machine on which the server is running.

        htons() converts the port number from host byte order
        to a port number in network byte order.

    */

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = htons(INADDR_ANY);
    server_addr.sin_port = htons(portNum);

    /* ---------- Enlazando los sockets ---------- */
    if ((bind(client, (struct sockaddr*)&server_addr,sizeof(server_addr))) < 0) {
        cout << "=> Error binding connection, the socket has already been established..." << endl;
        return;
    }
    /*
        The bind() system call binds a socket to an address,
        in this case the address of the current host and port number
        on which the server will run. It takes three arguments,
        the socket file descriptor. The second argument is a pointer
        to a structure of type sockaddr, this must be cast to
        the correct type.
    */

    size = sizeof(server_addr);
    cout << "=> Looking for clients..." << endl;

    /* ------------- LISTENING CALL ------------- */
    /* ---------------- listen() ---------------- */

    listen(client, 1);

    /*
        The listen system call allows the process to listen
        on the socket for connections.

        The program will be stay idle here if there are no
        incomming connections.

        The first argument is the socket file descriptor,
        and the second is the size for the number of clients
        i.e the number of connections that the server can
        handle while the process is handling a particular
        connection. The maximum size permitted by most
        systems is 5.

    */

    /* ------------- ACCEPTING CLIENTS  ------------- */
    /* ----------------- listen() ------------------- */

    /*
        The accept() system call causes the process to block
        until a client connects to the server. Thus, it wakes
        up the process when a connection from a client has been
        successfully established. It returns a new file descriptor,
        and all communication on this connection should be done
        using the new file descriptor. The second argument is a
        reference pointer to the address of the client on the other
        end of the connection, and the third argument is the size
        of this structure.
    */

    int clientCount = 1;
    server = accept(client,(struct sockaddr *)&server_addr,&size);

    // first check if it is valid or not
    if (server < 0)
        cout << "=> Error on accepting..." << endl;

    while (server > 0)
    {
        strcpy(buffer, "=> Server connected...\n");
        send(server, buffer, buffsize, 0);
        cout << "=> Connected with the client #" << clientCount << ", you are good to go..." << endl;
        cout << "\n=> Enter # to end the connection\n" << endl;

        /*
            Note that we would only get to this point after a
            client has successfully connected to our server.
            This reads from the socket. Note that the read()
            will block until there is something for it to read
            in the socket, i.e. after the client has executed a
            the send().

            It will read either the total number of characters
            in the socket or 1024
        */
        //forma json {"tipo":"i","valor":2,"etiqueta":"a"}
        do {
            json j;

            do {
                message = true;
                recv(server, buffer, buffsize, 0);

                if (*buffer == '#') {
                    isExit = true;
                    return;
                }
                cout<< buffer <<endl;
                j = json::parse(buffer);
                cout<< j <<endl;

                bool condition = false;
                for (int i = 0; i < names->getCount(); i++) {
                    if (names->getIn(i) == j["etiqueta"]) {
                        condition = true;
                    }
                }
                if (!condition) {
                    this->allocateVar(j);
                }

                message = false;
            } while (message);


            string jString = getAll().dump();
            strcpy(buffer,jString.c_str());
            send(server, buffer, buffsize, 0);

            /*if (*buffer == '#') {
                send(server, buffer, buffsize, 0);
                *buffer = '*';
                isExit = true;
            }*/
        } while (!isExit);
        /*do {
            cin >> buffer;
            send(server, buffer, buffsize, 0);
            if (*buffer == '#') {
                send(server, buffer, buffsize, 0);
                *buffer = '*';
                isExit = true;
            }
        } while (*buffer != '*');
            /*
            do {
                recv(server, buffer, buffsize, 0);
                cout << buffer << " ";
                if (*buffer == '#') {
                    *buffer == '*';
                    isExit = true;
                }
            } while (*buffer != '*');
        }*/

        /* ---------------- CLOSE CALL ------------- */
        /* ----------------- close() --------------- */

        // inet_ntoa converts packet data to IP, which was taken from client
        cout << "\n\n=> Connection terminated with IP " << inet_ntoa(server_addr.sin_addr);
        close(server);
        cout << "\nGoodbye..." << endl;
        isExit = false;
        exit(1);
    }

    close(client);
}


void mserver::allocateVar(json j) {
    string type = j["tipo"];
    string name = j["etiqueta"];
    string valor = j["valor"];

    if (type == "int") {
        int a = stoi(valor);
        *(int *)((char*)memory+posSum) = a;
        position->addLast(posSum);
        posSum += sizeof(int);
        types[names->getCount()] = "i";
        names->addLast(j["etiqueta"]);

    } else if (type == "long") {
        long a = stol(valor);
        *(long *)((char*)memory+posSum) = a;
        position->addLast(posSum);
        posSum += sizeof(long);
        types[names->getCount()] = "l";
        names->addLast(j["etiqueta"]);

    } else if (type == "float") {
        float a = stof(valor);
        *(float *)((char*)memory+posSum) = a;
        position->addLast(posSum);
        posSum += sizeof(float);
        types[names->getCount()] = "f";
        names->addLast(j["etiqueta"]);

    } else if (type == "double") {
        double a = stod(valor);
        *(double *)((char*)memory+posSum) = a;
        position->addLast(posSum);
        posSum += sizeof(double);
        types[names->getCount()] = "d";
        names->addLast(j["etiqueta"]);

    } else if (type == "char") {
        string a = (j["valor"]);
        char *b;
        strcpy(b,a.c_str());
        *((char *)memory+posSum) = *b;
        delete b;
        position->addLast(posSum);
        posSum += sizeof(char);
        types[names->getCount()] = "c";
        names->addLast(j["etiqueta"]);

    } else if (type == "struct") {

    } else if (type == "reference") {

    }
}

// forma del json {"pos":"000x00","valor":12,"etiqueta":"num","ref":0,"tipo":"int"}
json mserver::getVar(string eti) {
    int pos = 0;
    json json1;
    for (int i = 0; i < names->getCount(); i++) {
        if (names->getIn(i) == eti) {
            json1["etiqueta"] = names->getIn(i);
            pos = i;
        }
    }
    string type = types[pos];
//    cout << type <<endl;
    if (type == "i") {
        json1["valor"] = *(int *) ((char *) memory + position->getIn(pos));
        json1["tipo"] = "int";
    } else if (type == "l") {
        json1["valor"] = *(long *) ((char *) memory + position->getIn(pos));
        json1["tipo"] = "long";
    } else if (type == "f") {
        json1["valor"] = *(float *) ((char *) memory + position->getIn(pos));
        json1["tipo"] = "float";
    } else if (type == "d") {
        json1["valor"] = *(double *) ((char *) memory + position->getIn(pos));
        json1["tipo"] = "double";
    } else if (type == "c") {
        json1["valor"] = *((char*)memory+position->getIn(pos));
        json1["tipo"] = "char";
    } else if (type == "s") {

    } else if (type == "r") {

    }
    json1["pos"] = static_cast<std::ostringstream&>(
            std::ostringstream() << &*(float *)(memory+ position->getIn(pos))).str();;
    json1["ref"] = references->getIn(pos);

    return json1;
}

json mserver::getAll() {
    json jsonArray = json::array();

    for (int i = 0; i < names->getCount() ; i++) {
        jsonArray.insert(jsonArray.end(),
                         getVar(names->getIn(i)));
    }
    return jsonArray;
}
