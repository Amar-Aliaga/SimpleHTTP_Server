#include "Networking/Servers/TestServer.hpp"
#include "Networking/Servers/SimpleServer.hpp"
#include "Networking/So-networking.hpp"
int main() {
    So::TestServer server(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY, 10); 
    So::TestServer server1(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY, 10);
    server1.launch();
    return 0;
}