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
        printf("Sistema de votación electrónica\n"
            "----------------------------\n"
            "1. Elector\n"
            "2. Administrador\n"
            "3. Resultados y estadísticas\n"
            "0. Salir\n"
            "----------------------------\n\n"
            "Seleccione una opción: "
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

/* Menú para votar */
void menuIngresoVotante()
{
    int opcion = 0;

    do
    {
        system("cls");
        printf("Menú Elector\n"
            "----------------------------\n"
            "1. Ingresar\n"
            "0. Volver\n"
            "----------------------------\n\n"
            "Seleccione una opción: "
        );
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            submenuIngresoVotante();
            opcion = 0; // Mostrar menú principal una vez terminado el flujo de votación
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
        "Ingrese cédula:\n"
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
        opcion = 0; // Una vez hecho el voto, salir de este menú
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
            "1. Petronio\t\t 2. Maléfico\n"
            "3. Fajargod\t\t 4. Voto en blanco\n"
            "-------------------------------------------------\n"
        );
        cin >> opcion;

        // El usuario eligió una opción válida
        if (opcion >= 1 && opcion <= 4)
        {
            // Bandera para detener bucle
            cerrarMenu = true;

            if (opcion == 4) // Opción de voto en blanco
                guardarVoto(opcion, true);
            else
                guardarVoto(opcion, false);
    
            // Mensaje de éxito
            system("cls");
            printf("¡Voto realizado!\n");
            system("pause");
        }
        // Cerrar menú al tercer intento
        else if (intentos == 3)
        {
            cerrarMenu = true;
            system("cls");
            printf("Ha alcanzado el número máximo de intentos\n");
            system("pause");
        }

    } while ( ! cerrarMenu);

    // Actualizar información del elector (indicar que ya votó)
    if (intentos <= 3)
    {
        // funcionParaEso()
    }
}