//
//  server.cpp
//  
//
//  Created by Lalo Espino on 16/05/18.
//

#include <iostream>
#include "Respuesta.hpp"
#include "mensaje.hpp"

using namespace std;

int main() {

    Respuesta res(9090);
//    struct mensaje msg;
    
    while (true) {
        cout << "Esperando conexión... 🙄" << endl;
        struct mensaje msg = *res.getRequest();
        
        cout << "Ya copia argumentos 🤙🏽 :" << msg.arguments << endl;
        
        res.sendReply(msg.arguments, msg.IP, msg.puerto);

    }

    return 0;
}
