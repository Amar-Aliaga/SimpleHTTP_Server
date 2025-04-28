#ifndef CONNECTINGSOCKET_HPP
#define CONNECTINGSOCKET_HPP


#include "SimpleSocket.hpp"

namespace So {
    class ConnectingSocket : public SimpleSocket {
    public: 
        ConnectingSocket(int domain, int type, int protocol, int port, u_long interface);

        int connect_to_network(int sock, struct sockaddr_in address) override;
    };
}

#endif