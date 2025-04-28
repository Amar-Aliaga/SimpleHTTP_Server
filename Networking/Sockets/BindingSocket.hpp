#ifndef BINDINGSOCKET_HPP
#define BINDINGSOCKET_HPP

#include "SimpleSocket.hpp"

namespace So {
    class BindingSocket : public SimpleSocket {
    public: 
        BindingSocket(int domain, int type, int protocol, int port, u_long interface);

        int connect_to_network(int sock, struct sockaddr_in address) override;
    };
}

#endif