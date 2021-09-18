//
// Created by AlexLam on 2021/9/18.
//

#ifndef INC_2020LEIKETANG_SERVERS_H
#define INC_2020LEIKETANG_SERVERS_H
#include <sys/unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/tcp.h>
#include <cstdio>
#include <iostream>
using namespace std;

class Servers {
public:
    void
    server() {
        // new socket
        int socketFd = socket(AF_INET,SOCK_STREAM,0);

        //setting parameter
        struct sockaddr_in serverAddress;
        serverAddress.sin_family = AF_INET;
        serverAddress.sin_addr.s_addr = 0x00000000;
        serverAddress.sin_port = 0xBEAF;

        //bind socket
        bind(socketFd,(struct sockaddr *)&serverAddress,
             sizeof(serverAddress));
        listen(socketFd, 6);

        // waiting  connection
        struct sockaddr_in clientAddress;
        socklen_t len = sizeof(clientAddress);
        int connection = accept(socketFd, (struct sockaddr*)&clientAddress, &len);

        const int size = 100;
        char data[size];
        recv(connection, data, size, 0);
        printf("recv: (%s)\n", data);
    }
};

int
main() {
    Servers().server();
}



#endif //INC_2020LEIKETANG_SERVERS_H
