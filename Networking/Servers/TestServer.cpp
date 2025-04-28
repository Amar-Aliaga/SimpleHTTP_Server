#include "TestServer.hpp"

So::TestServer::TestServer(int domain, int type, int protocol, int port, u_long interface, int backlog)
    : SimpleServer(domain, type, protocol, port, interface, backlog)
{
    launch();
}

void So::TestServer::accepter() {
    struct sockaddr_in address = get_socket()->get_address();
    int addrlen = sizeof(address);
    new_socket = accept(get_socket()->get_sock(), (struct sockaddr *)&address, (socklen_t *)&addrlen);  
    read(new_socket, buffer, buffer_size);
    std::cout << "===== Running Accepter =====" << '\n';
}

void So::TestServer::handler() {
    std::cout << buffer << '\n';
}

void So::TestServer::responder() {
    const char *hello = "HTTP/1.1 200 OK\nContent-Type: text/plain\nContent-Length: 12\n\nHello world!";
    write(new_socket, hello, strlen(hello));
    close(new_socket);
    std::cout << "===== Running Responder =====" << '\n';
}

void So::TestServer::launch() {
    while(true) {
        std::cout << "===== WAITING =====" << '\n';
        accepter();
        handler();
        responder();
        std::cout << "===== DONE =====" << '\n';
    }
}


