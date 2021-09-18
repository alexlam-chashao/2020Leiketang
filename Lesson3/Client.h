//
// Created by AlexLam on 2021/9/18.
//

#ifndef INC_2020LEIKETANG_CLIENT_H
#define INC_2020LEIKETANG_CLIENT_H



#include <sys/unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/tcp.h>
#include <cstdio>
#include <iostream>
using namespace std;

class Client {
public:
    void
    client() {
        int socketFd = socket(AF_INET,SOCK_STREAM,0);

        struct sockaddr_in serverAddress;
        serverAddress.sin_family = AF_INET;
        serverAddress.sin_addr.s_addr = 0x00000000;
        serverAddress.sin_port = 0xBEAF;

        connect(socketFd, (struct sockaddr *)&serverAddress,
                sizeof(serverAddress));
        string data = "This is learning from KuaiBianCheng.com";
        send(socketFd, data.c_str(), data.length(), 0);
    }
};

int
main() {
    Client().client();

    return 0;
}

#endif //INC_2020LEIKETANG_CLIENT_H
