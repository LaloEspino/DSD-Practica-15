//
//  Respuesta.cpp
//  
//
//  Created by Paloma on 18/05/18.
//

#include "Respuesta.hpp"
#include "SocketDatagrama.h"
#include "mensaje.hpp"

Respuesta::Respuesta(int pl) {
    socketlocal = new SocketDatagrama(pl);
}

struct mensaje *Respuesta::getRequest(void) {
    
    int size = sizeof(struct mensaje);
    PaqueteDatagrama pack(size);
    
    socketlocal->recibe(pack);
    
    struct mensaje msg;
    
    // Copia los datos recibidos a una estructura
    memcpy(&msg, pack.obtieneDatos(), size);
    
    cout << msg.operationId << endl;
    
    
    
//    const int size = sizeof(struct mensaje);
//    PaqueteDatagrama pack(size);
//    socketlocal->recibe(pack);
//
//    struct mensaje msg;
//
//    memcpy(&msg, pack.obtieneDatos(), sizeof(struct mensaje));
//
//    cout<<msg.operationId<<endl;
    
	return &msg;
}


void Respuesta::sendReply(char *respuesta, char *ipClient, int puertoCliente) {
}
