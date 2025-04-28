#ifndef TESTSERVER_HPP
#define TESTSERVER_HPP

#include "SimpleServer.hpp"
#include <cstring>

namespace So {

    class TestServer : public SimpleServer {
    private:
        static constexpr size_t buffer_size = 30000;
        char buffer [buffer_size] = {0};
        int new_socket {};
        void accepter()  override;
        void handler()   override;
        void responder() override;
    public:
        TestServer();
        //TestServer(int domain = AF_INET, int type = SOCK_STREAM, int protocol = 0, int port = 80, u_long interface = INADDR_ANY, int backlog = 10);
        TestServer(int domain, int type, int protocol, int port, u_long interface, int backlog);
        void launch() override;
        virtual ~TestServer() = default;
    };
}

#endif