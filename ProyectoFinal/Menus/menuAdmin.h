// Firmas
void menuAdmin();

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
        "Ingrese c�dula:\n"
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
        opcion = 0; // Actualizar este valor para que, una vez hecho el flujo se devuelva al men� anterior
        menuAdmin();
    }
}

void menuAdmin()
{
    int opcion = 0;

    do
    {
        system("cls");

        /* Cuando se elije la opci�n Habilitar elecci�n, se van a deshabilitar algunas opciones del men�*/

        printf("Men� Administrador\n"
            "----------------------------\n"
            "1. Registrar elector\n"
            "2. Editar elector\n"
            "3. Eliminar elector (temporal hasta el d�a de votaci�n)\n"
            "4. Registrar candidato (temporal hasta el d�a de votaci�n)\n"
            "5. Registrar regi�n (temporal hasta el d�a de votaci�n)\n"
            "8. Habilitar elecci�n\n"
            "9. Finalizar elecci�n\n"
            "0. Volver\n"
            "----------------------------\n\n"
            "Seleccione una opci�n: "
        );
        cin >> opcion;

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