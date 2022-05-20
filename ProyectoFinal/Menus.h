#include <iostream>
#include "Votos.h"
#include "Administrador.h"
#include "Elector.h"

using namespace std;

void menuIngresoVotante();
void submenuIngresoVotante();
void menuElegirCandidato();
void loginAdmin();
void menuAdmin();

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
            loginAdmin();
            break;
        }
    } while (opcion != 0);
}

// Flujo usuario elector
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

    // Ingreso exitoso
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

// Flujo usuario administrador
void loginAdmin()
{
    int opcion = 1;
    int cedula;
    int clave;
    // Bandera para indicar que el ingreso fue exitoso
    bool ingresoExitoso = true;

    system("cls");
    printf("Login administrador\n"
        "----------------------------\n"
        "Ingrese cédula:\n"
        "----------------------------\n"
    );
    fflush(stdout);
    cin >> cedula;

    system("cls");
    printf("Login administrador\n"
        "----------------------------\n"
        "Ingrese clave:\n"
        "----------------------------\n"
    );
    fflush(stdout);
    cin >> clave;

    // Ingreso exitoso
    if (ingresoExitoso)
    {
        opcion = 0; // Actualizar este valor para que, una vez hecho el flujo se devuelva al menú anterior
        menuAdmin();
    }
}

void menuAdmin()
{
    int opcion = 0;

    do
    {
        system("cls");

        /* Cuando se elije la opción Habilitar elección, se van a deshabilitar algunas opciones del menú*/

        printf("Menú Administrador\n"
            "----------------------------\n"
            "1. Registrar elector\n"
            "2. Editar elector\n"
            "3. Eliminar elector (temporal hasta el día de votación)\n"
            "4. Registrar candidato (temporal hasta el día de votación)\n"
            "5. Registrar región (temporal hasta el día de votación)\n"
            "8. Habilitar elección\n"
            "9. Finalizar elección\n"
            "0. Volver\n"
            "----------------------------\n\n"
            "Seleccione una opción: "
        );
        cin >> opcion;

        // Estas funciones retornan 0, así que se reasigna 'opcion' para salir de bucle
        switch (opcion)
        {
            case 1:
                registrarElector();
            break;
            case 2:
                editarElector();
            break;
            case 3:
                eliminarElector();
            break;
            case 4:
                registrarCandidato();
            break;
            case 5:
                registrarRegion();
            break;
            case 8:
                iniciarEleccion();
                opcion = 0;
            break;
            case 9:
                finalizarEleccion();
                opcion = 0;
            break;
        }
    } while (opcion != 0);
}