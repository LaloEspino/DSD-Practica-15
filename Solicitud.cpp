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
    socketlocal = new SocketDatagrama(9090);
}

char * Solicitud::doOperation(char *IP, int puerto, int operationId, char *arguments) {
    
    struct mensaje msg;
    unsigned int size = sizeof(struct mensaje);
    char IPs[] = "10.100.65.246";


    /* Se pasan los atributos a la estructura msg */

    msg.messageType = 0;
    msg.requestId = 0;
    strcpy(msg.IP, IP);
    msg.puerto = puerto;
    msg.operationId = operationId;
    memcpy(msg.arguments, arguments, strlen(arguments));

    /* Se envia la estructura  */


    //Este ya funciona
    PaqueteDatagrama paq((char *)&msg, size, IPs, puerto);
    
    socketlocal->envia(paq);

    /* Se recibe la respuesta  */

    PaqueteDatagrama paq1(strlen(arguments));
    socketlocal->recibe(paq1);

    char * respuesta = (char *)paq1.obtieneDatos();

    // cout << "Respuesta " << respuesta << endl;

    return respuesta;
    
}
