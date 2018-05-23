//
//  server.cpp
//  
//
//  Created by Lalo Espino on 16/05/18.
//

#include <iostream>
#include "Respuesta.hpp"


using namespace std;

int main() {

    Respuesta res(7300);


    return 0;
}


// SocketDatagrama socket(7200);
// unsigned int num = 97;
// int cont = 0;
// int *primo[3];
// while (1) {
//     PaqueteDatagrama paq(sizeof(num));
//     //PaqueteDatagrama paq((char *)num,sizeof(unsigned int),ip,7200);
//     socket.recibe(paq);
//     cont++;
//     //num = (int *)paq.obtieneDatos();
//     unsigned int res[2];
//     res[0] = num;
//     res[1] = cont;
//     //cout << "Res: " << res << endl;
//     //cout << num[0] <<"+" << num[1] << "=" << res << endl;
//     PaqueteDatagrama paq1((char *) &res,sizeof(unsigned int),paq.obtieneDireccion(),paq.obtienePuerto());
//     PaqueteDatagrama paq2((char *) &cont,sizeof(int),paq.obtieneDireccion(),paq.obtienePuerto());
//     socket.envia(paq1);
//     socket.envia(paq2);
    
//     socket.recibe(paq);
//     primo[cont - 1] = (int *)paq.obtieneDatos();
//     cout << "Primo" << cont << " = " << *primo[cont - 1] << endl;
    
//     if(cont == 3) {
//         if(*primo[0] == 1 || *primo[1] == 1 || *primo[2] == 1) {
//             cout << "El numero NO es primo" << endl;
//         } else {
//             cout << "El numero SI es primo" << endl;
//         }
//         break;
//     }
    
//     }
//     return 0;
