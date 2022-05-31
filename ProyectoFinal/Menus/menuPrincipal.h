#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <ctime>
#include <conio.h>

using namespace std;

void TipoUsser();

int main()
{
    admin1.cedula=1091272404;
    admin2.cedula=1088037390;
    admin1.pass=admin1.cedula/1000000;
    admin2.pass=admin2.cedula/1000000;
    TipoUsser();
    return 0;
}

void TipoUsser()
{
    int op;

    system("clear");
    
    cout<<"TIPO DE USUARIO\n"
    "----------------------------\n"
    "1- Elector\n"
    "2- Administrador\n"
    "3- Consultante\n"
    "0- Salir\n"
    "----------------------------\n"
    "Seleccione una opción: ";cin>>op;
    
    switch(op){
        case 1:
        Elector();
        break;
        case 2:
        Administrador();
        break;
        case 3:
        Consultas();
        break;
        case 0:
        exit(0);
        break;
    }
}
