#ifndef SIMPLESERVER_HPP
#define SIMPLESERVER_HPP

#include "../So-networking.hpp"
#include <unistd.h>

namespace So {

    class SimpleServer {
    private:
        ListeningSocket *socket = nullptr;
        virtual void accepter() = 0;
        virtual void handler() = 0;
        virtual void responder() = 0;
    public:
        //SimpleServer();
        SimpleServer(int domain, int type, int protocol, int port, u_long interface, int backlog);
        virtual ~SimpleServer() = default;
        virtual void launch() = 0;
        ListeningSocket *get_socket();      
    };

}

#endif