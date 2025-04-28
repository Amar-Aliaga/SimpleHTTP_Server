#include "Networking/Servers/TestServer.hpp"
#include "Networking/Servers/SimpleServer.hpp"
#include "Networking/So-networking.hpp"
int main() {
    So::TestServer server(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY, 10); 
    So::TestServer server1(AF_INET, SOCK_STREAM, 0, 8080, INADDR_ANY, 10);// Custom values// Create a TestServer instance
    server.launch();  
    server1.launch();     // Launch the server
    return 0;
}