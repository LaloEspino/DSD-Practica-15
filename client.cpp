//
//  client.cpp
//  
//
//  Created by Lalo Espino on 16/05/18.
//

#include "Solicitud.hpp"
#include <iostream>
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atoi */

using namespace std;

int main(int argc, char * argv[]) {
    
    if (argc < 1) {
        return 1;
    }
    
    Solicitud sol;

    char IP[16];
    strcpy(IP, argv[1]);
    int port = atoi(argv[2]);

    char cadena[] = "Eduardo Espino y Victor Estrada";
    int invierteCadena = 1;
    
    char * respuesta = sol.doOperation(IP, port, invierteCadena, cadena);
    
    cout << respuesta << endl;
    
}
