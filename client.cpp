//
//  client.cpp
//  
//
//  Created by Lalo Espino on 16/05/18.
//

#include "Solicitud.hpp"
#include <iostream>

using namespace std;

int main(int argc, char * argv[]) {
    
    Solicitud sol;
    
    char IP[] = argv[1];
    int port = atoi(argv[2]);
    
//    char IP[] = "10.100.65.232";
//    int port = 9090;

    char cadena[] = "Eduardo Espino y Victor Estrada";
    int invierteCadena = 1;
    
    char * respuesta = sol.doOperation(IP, port, invierteCadena, cadena);
    
    cout << respuesta << endl;
    
}
