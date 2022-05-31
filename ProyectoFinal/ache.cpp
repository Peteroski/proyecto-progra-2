/*#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <ctime>
#include <conio.h>

using namespace std;

void TipoUsser();
void Administrador();
void Elector();
void Consultas();
void FuncionesAdmin();
void delay(int secs);
bool EstaLogeado();

int main()
{
    TipoUsser();
    return 0;
}

void TipoUsser()
{
    int op;

    system("clear");

    cout << "TIPO DE USUARIO\n"
        "----------------------------\n"
        "1- Elector\n"
        "2- Administrador\n"
        "3- Consultante\n"
        "0- Salir\n"
        "----------------------------\n\n"
        "Seleccione una opción: "; cin >> op;

    switch (op) {
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

void Administrador()
{
    int op;

    system("clear");

    cout << "ADMINISTRADOR\n"
        "----------------------------\n"
        "1- Ingresar\n"
        "2- Registrarse\n"
        "0- Salir\n"
        "9- Atrás\n"
        "----------------------------\n\n"
        "Seleccione una opción: "; cin >> op;

    if (op == 1) {
        system("clear");

        bool estado = EstaLogeado();

        if (estado) {
            FuncionesAdmin();
        }
        else {
            cout << "Error. Usuario y/o clave incorrectos.\n";
            delay(3);
            main();
        }
    }
    else if (op == 2) {
        system("clear");

        string usser, pass;

        cout << "Digite el usuario: "; cin >> usser;
        cout << "Digite la contraseña: "; cin >> pass;

        ofstream file;
        file.open("c:\\" + usser + ".txt");
        file << usser << endl << pass;
        file.close();

        delay(3);
        Administrador();
    }
    else if (op == 9) TipoUsser();
    else if (op == 0) exit(0);
}

void FuncionesAdmin()
{
    int op;

    system("clear");

    cout << "ADMINISTRADOR\n"
        "----------------------------\n"
        "1- Registrar Electores\n"
        "2- Registrar Candidatos\n"
        "3- Registrar Partidos Políticos\n"
        "0- Salir\n"
        "9- Atrás\n"
        "----------------------------\n\n"
        "Seleccione una opción: "; cin >> op;

    switch (op) {
    case 1:
        // Usar misma función de registro admins
        break;
    case 2:
        // Usar misma función de registro admins
        break;
    case 3:
        // Usar misma función de registro admins
        break;
    case 9:
        TipoUsser();
        break;
    case 0:
        exit(0);
        break;
    }
}

void Elector()
{
    system("clear");

    int cedula, clave;

    cout << "ELECTOR\n\n"
        "Ingresar Cédula: "; cin >> cedula;
    "\nIngresar Clave: "; cin >> clave;

    // Validar existencia con el registro realizado por un administrador
}

void Consultas()
{
    system("clear");

    int op;

    cout << "CONSULTANTE\n\n"
        "Ingrese Cédula: ";

    // Validar si existe y desplegar el menú de opciones

    cout << "REALIZAR CONSULTA\n"
        "----------------------------\n"
        "1- Candidato ganador mitad de los votos más 1\n"
        "2- Dos candidatos ganadores (si ninguno pasó el umbral)\n"
        "3- Orden de menor a mayor\n"
        "4- Cantidad de votos en blanco\n"
        "5- Votos para cada candidato del país\n"
        "6- Votos de cada candidato por regiones\n"
        "7- Porcentaje de cada candidato (histograma)\n"
        "8- Total personas que votaron y que no votaron (histograma)\n"
        "9- Dependiendo de las 5 regiones (1 a 4)\n"
        "0- Salir\n"
        "10- Inicio\n"
        "----------------------------\n\n"
        "Seleccione una opción: "; cin >> op;
}

bool EstaLogeado()
{
    string usser, pass, un, pw;
    cout << "Digite el usuario: "; cin >> usser;
    cout << "Digite la contraseña: "; cin >> pass;

    ifstream leer("c:\\" + usser + ".txt");
    //cin.getline(leer, un);
    //cin.getline(leer, pw);

    if (un == usser && pw == pass) return true;
    else return false;
}

void delay(int secs) {
    for (int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
}*/