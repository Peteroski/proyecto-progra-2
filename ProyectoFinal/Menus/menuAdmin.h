// Prototipo

void FuncionesAdmin();

// Inicio

void Administrador()
{
    int op;
    
    system("clear");
    
    cout<<"ADMINISTRADOR\n"
    "----------------------------\n"
    "1- Ingresar\n"
    "0- Salir\n"
    "9- Atrás\n"
    "----------------------------\n"
    "Seleccione una opción: ";cin>>op;
    
    if(op==1){
        system("clear");
        
        int cd,pw;
        
        cout<<"Digite su cédula: ";cin>>cd;
        cout<<"Digite su clave: ";cin>>pw;
        
        if((cd==admin1.cedula && pw==admin1.pass) || (cd==admin2.cedula && pw==admin2.pass)) FuncionesAdmin();
        else{
            cout<<"Error. Usuario y/o contraseña incorrectos.\n\n";
            delay(3);
            TipoUsser();
        }
    }else if(op==9) TipoUsser();
    else if(op==0) exit(0);
    else Administrador();
}

void FuncionesAdmin()
{
    int op=0;

    do
    {
        //system("cls");

        /* Cuando se elije Habilitar elección, se van a deshabilitar algunas opciones del menú*/

        cout<<"Menú Administrador\n"
            "----------------------------\n"
            "1. Registrar elector\n"
            "2. Editar elector\n"
            "3. Eliminar elector (temporal hasta el día de votación)\n"
            "4. Registrar candidato (temporal hasta el día de votación)\n"
            "5. Registrar región (temporal hasta el día de votación)\n"
            "8. Habilitar elección\n"
            "9. Finalizar elección\n"
            "0. Volver\n"
            "----------------------------\n"
            "Seleccione una opción: ";cin>>op;

        switch(op){
        case 1:
            RegistrarElector();
            break;
        case 2:
            EditarElector();
            break;
        case 3:
            EliminarElector();
            break;
        case 4:
            registrarCandidatos();
            //getCandidatos();
            break;
        case 5:
            RegistrarRegion();
            break;
        case 8:
            IniciarEleccion();
            op=0;
            break;
        case 9:
            FinalizarEleccion();
            op=0;
            break;
        }
    } while (op!=0);
}
