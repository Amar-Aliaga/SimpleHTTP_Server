#include "ListeningSocket.hpp"

So::ListeningSocket::ListeningSocket(int domain, int type, int protocol, int port, u_long interface, int backlog) :
    BindingSocket(domain, type, protocol, port, interface) {
        this->backlog = backlog;
        start_listening();
        test_connection(listening);
    }
    
void So::ListeningSocket::start_listening() {
    listening = listen(get_sock(), backlog);
}    

int So::ListeningSocket::get_listening() const {
    return listening;
}

int So::ListeningSocket::get_backlog() const {
    return backlog;
}