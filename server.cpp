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

    Respuesta res(9091);
//    struct mensaje msg;
    
    while (true) {
        cout << endl << "Esperando conexión... 🙄" << endl;
        struct mensaje msg = *res.getRequest();
        
        cout << "IP: " << msg.IP << endl;
        cout << "PT: " << msg.puerto << endl;
        cout << "AG: " << msg.arguments << endl;

        res.sendReply(msg.arguments, msg.IP, msg.puerto);

    }

    return 0;
}
