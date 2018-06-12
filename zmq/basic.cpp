#include <zmq.hpp>
#include <string>
#include <iostream>
#ifndef _WIN32
#include <unistd.h>
#else
#include <windows.h>

#define sleep(n)    Sleep(n)
#endif
const int READ_TIMEOUT = 5 * 1000;

int main () {
    //  Prepare our context and socket
    zmq::context_t context (1);
    zmq::socket_t socket (context, ZMQ_REP);
    socket.bind ("tcp://*:5555");



    while (true) {
        zmq::message_t request;

        //  Wait for next request from client

        socket.setsockopt(ZMQ_RCVTIMEO, READ_TIMEOUT);

        if(0 < socket.recv (&request)) {


          std::cout << (char *) request.data() << std::endl;

          //  Do some 'work'
          sleep(1);

          //  Send reply back to client
          zmq::message_t reply (5);
          memcpy (reply.data (), "World", 5);
          socket.send (reply);

        } else {
          std::cout << "No pude leer nada en " << READ_TIMEOUT << " milisegundos" << std::endl;
        }
    }
    return 0;
}
