#include "SimpleServer.hpp"

So::SimpleServer::SimpleServer(int domain, int type, int protocol, int port, u_long interface, int backlog) {
    socket = new ListeningSocket(domain, type, protocol, port, interface, backlog);
}

So::ListeningSocket *So::SimpleServer::get_socket() {
    return socket;
}