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
    
    char IP[] = "10.100.65.246";
    char cadena[] = "Victor Boom";
    int invierteCadena = 1;
    
    char * respuesta = sol.doOperation(IP, 9090, invierteCadena, cadena);
    
    cout << respuesta << endl;
    
}
