#include <iostream>
#include "Votos.h"
#include "Elector.h"

using namespace std;

void menuIngresoVotante();
void submenuIngresoVotante();
void menuElegirCandidato();

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
            menuIngresoVotante();
            break;
        case 2:

            break;
        }
    } while (opcion != 0);
}

/* Men� para votar */
void menuIngresoVotante()
{
    int opcion = 0;

    do
    {
        system("cls");
        printf("Men� Elector\n"
            "----------------------------\n"
            "1. Ingresar\n"
            "0. Volver\n"
            "----------------------------\n\n"
            "Seleccione una opci�n: "
        );
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            submenuIngresoVotante();
            opcion = 0; // Mostrar men� principal una vez terminado el flujo de votaci�n
            break;
        }
    } while (opcion != 0);
}

void submenuIngresoVotante()
{
    int opcion = 1;
    int cedula;
    int clave;
    // Bandera para indicar que el ingreso fue exitoso
    bool ingresoExitoso = true;

    system("cls");
    printf("Login elector\n"
        "----------------------------\n"
        "Ingrese c�dula:\n"
        "----------------------------\n"
    );
    fflush(stdout);
    cin >> cedula;

    system("cls");
    printf("Login elector\n"
        "----------------------------\n"
        "Ingrese clave:\n"
        "----------------------------\n"
    );
    fflush(stdout);
    cin >> clave;

    // Ingrese exitoso
    if (ingresoExitoso)
    {
        menuElegirCandidato();
        opcion = 0; // Una vez hecho el voto, salir de este men�
    }
}

void menuElegirCandidato()
{
    int opcion, intentos = 0;
    bool cerrarMenu = false, votoEnBlanco = true;

    do
    {
        intentos++;

        system("cls");
        printf("Votar - Elija al candidato de su preferencia\n"
            "-------------------------------------------------\n"
            "1. Petronio\t\t 2. Mal�fico\n"
            "3. Fajargod\t\t 4. Voto en blanco\n"
            "-------------------------------------------------\n"
        );
        cin >> opcion;

        // El usuario eligi� una opci�n v�lida
        if (opcion >= 1 && opcion <= 4)
        {
            // Bandera para detener bucle
            cerrarMenu = true;

            if (opcion == 4) // Opci�n de voto en blanco
                guardarVoto(opcion, true);
            else
                guardarVoto(opcion, false);
    
            // Mensaje de �xito
            system("cls");
            printf("�Voto realizado!\n");
            system("pause");
        }
        // Cerrar men� al tercer intento
        else if (intentos == 3)
        {
            cerrarMenu = true;
            system("cls");
            printf("Ha alcanzado el n�mero m�ximo de intentos\n");
            system("pause");
        }

    } while ( ! cerrarMenu);

    // Actualizar informaci�n del elector (indicar que ya vot�)
    if (intentos <= 3)
    {
        // funcionParaEso()
    }
}