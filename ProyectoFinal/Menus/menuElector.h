// Firmas
void menuElegirCandidato();

// Flujo usuario elector
void loginElector()
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
                guardarVoto(opcion, true, "");
            else
                guardarVoto(opcion, false, "");

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

    } while (!cerrarMenu);

    // Actualizar información del elector (indicar que ya votó)
    if (intentos <= 3)
    {
        // funcionParaEso()
    }
}
