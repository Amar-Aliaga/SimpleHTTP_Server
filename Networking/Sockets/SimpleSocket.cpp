#include "SimpleSocket.hpp"

So::SimpleSocket::SimpleSocket(int domain, int type, int protocol, int port,  u_long interface) {
    // Define address structure
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);
    // Establish socket
    sock = socket(domain, type, protocol);
    test_connection(sock);
}

void So::SimpleSocket::test_connection(int item_to_test) {
    if(item_to_test < 0) {
        perror("Failed to connect");
        exit(EXIT_FAILURE);
    }
}

struct sockaddr_in So::SimpleSocket::get_address() const {
    return address;
}

int So::SimpleSocket::get_sock() const {
    return sock;
}

int So::SimpleSocket::get_connection() const {
    return connection;
}

void So::SimpleSocket::set_connection(int connection) {
    this->connection = connection;
}