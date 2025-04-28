#ifndef SIMPLESOCKET_HPP
#define SIMPLESOCKET_HPP

#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace So {

    class SimpleSocket {
    private:
        int sock;
        int connection;
        struct sockaddr_in address;
    public:
        SimpleSocket(int domain, int type, int protocol, int port, u_long interface);
        virtual int connect_to_network (int sock, struct sockaddr_in address) = 0;
        virtual ~SimpleSocket() = default;
        void test_connection(int item_to_test);

        struct sockaddr_in get_address() const;
        int get_sock() const;
        int get_connection() const;
        void set_connection(int connection);
    };

}



#endif