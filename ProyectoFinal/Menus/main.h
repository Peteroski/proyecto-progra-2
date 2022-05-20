#include <iostream>

#include "menuElector.h"
#include "menuAdmin.h"
#include "menuReportes.h"

using namespace std;

void menuPrincipal()
{
    int opcion = 0;

    do
    {
        system("cls");
        printf("Sistema de votaci�n electr�nica\n"
            "----------------------------\n"
            "1. Elector\n"
            "2. Administrador\n"
            "3. Resultados y estad�sticas\n"
            "0. Salir\n"
            "----------------------------\n\n"
            "Seleccione una opci�n: "
        );
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            loginElector();
        break;
        case 2:
            loginAdmin();
        break;
        case 3:
            menuReportes();
        break;
        }
    } while (opcion != 0);
}

