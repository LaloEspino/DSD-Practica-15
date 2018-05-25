//
//  Solicitud.cpp
//  
//
//  Created by Paloma on 18/05/18.
//

#include "Solicitud.hpp"
#include "mensaje.hpp"
#include <string.h>

Solicitud::Solicitud() {
    socketlocal = new SocketDatagrama(0);
}

char * Solicitud::doOperation(char *IP, int puerto, int operationId, char *arguments) {
    
    struct mensaje msg;
    unsigned int size = sizeof(struct mensaje);

    /* Se pasan los atributos a la estructura msg */

    msg.messageType = 0;
    msg.requestId = 0;
    strcpy(msg.IP, IP);
    msg.puerto = puerto;
    msg.operationId = operationId;
    memcpy(msg.arguments, arguments, sizeof(char));

    /* Se envia la estructura  */



    PaqueteDatagrama paq((char *)&msg, size, IP, puerto);
    socketlocal->envia(paq);

    /* Se recibe la respuesta  */

    PaqueteDatagrama paq1(sizeof(char));
    socketlocal->recibe(paq1);

    char * respuesta = (char *)paq1.obtieneDatos();

    return respuesta;
    
}
