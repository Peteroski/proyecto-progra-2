void reporteGeneral();
void reporteRegiones();

void menuReportes()
{
    int opcion = 0;

    do
    {
        system("cls");
        printf("Resultados y estadísticas\n"
            "----------------------------\n"
            "1. Reporte general\n"
            "2. Reporte por región\n"
            "0. Volver\n"
            "----------------------------\n\n"
            "Seleccione una opción: "
        );
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                reporteGeneral();
            break;
            case 2:
                reporteRegiones();
            break;
        }
    } while (opcion != 0);
}

void reporteGeneral ()
{
    system("cls");
    printf("Vista de reporte general (país) va aquí...\n");
    system("pause");
}

void reporteRegiones()
{
    system("cls");
    printf("Vista de reporte por región va aquí...\n");
    system("pause");
}