//
//  client.cpp
//
//
//  Created by Lalo Espino on 16/05/18.
//

#include "Solicitud.hpp"
#include <iostream>

using namespace std;

int main() {
    
    Solicitud sol;
    
    char IP[] = "10.100.66.80";
    int port = 9091;
    
    char cadena[] = "Eduardo Espino y Victor Estrada";
    int invierteCadena = 1;
    
    char * respuesta = sol.doOperation(IP, port, invierteCadena, cadena);
    
    cout << respuesta << endl;
    
    return 0;
    
}
