//
//  Solicitud.cpp
//  
//
//  Created by Paloma on 18/05/18.
//

#include "Solicitud.hpp"

Solicitud::Solicitud() {
    socketlocal = new SocketDatagrama(0);
}

char * Solicitud::doOperation(char *IP, int puerto, int operationId, char *arguments) {
    
//    struct mensaje msg;
//
//    /* Se pasan los atributos a la estructura msg */
//
//    msg.messageType = 0;
//    msg.requestId = 0;
//    strcpy(&msg.IP, IP);
//    msg.puerto = puerto;
//    msg.operationId = operationId;
//    memcpy(msg.arguments, arguments, sizeof(char));
//
//    /* Se envia la estructura  */
//
//    PaqueteDatagrama paq(&msg, sizeof(struct mensaje), IP, puerto);
//    socketlocal.envia(paq);
//
//    char res[10] = "Hola Boom";
//
//    return "Hola Boom";
    
    PaqueteDatagrama paq(arguments, sizeof(char), IP, puerto);
    socketlocal.envia(paq);
    
    PaqueteDatagrama paq1(sizeof(char));
    socketlocal.recibe(paq1);
    
    char * respuesta = (char *)paq1.obtieneDatos();
    
    return respuesta;
    
}
