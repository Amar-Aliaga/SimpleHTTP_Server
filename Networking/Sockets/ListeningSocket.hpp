#ifndef LISTENINGSOCKET_HPP
#define LISTENINGSOCKET_HPP

#include "BindingSocket.hpp"

namespace So {

    class ListeningSocket : public BindingSocket {
    private:
        int backlog {};
        int listening {};
    public:
        ListeningSocket(int domain, int type, int protocol, int port, u_long interface, int backlog);
        void start_listening();
        int get_listening() const;
        int get_backlog() const;
    };

}

#endif