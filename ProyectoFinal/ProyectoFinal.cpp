#include <iostream>
#include "ProyectoFinal.h"

using namespace std;

int eleccionHabilitada = false;
int segundaVuelta = false;

struct regiones
{
    char nombre[100];
};

struct
{
    int cedula;
    char nombre[200];
    char clave[10];
} persona;

struct
{
    char nombre[100];
} partido;

struct Candidato
{
    int votos;
    struct persona;
    struct partido;
} candidato;

struct
{
    struct persona;
    struct region;
} votante;

int main()
{
    menuPrincipal();
    /*nt n;
    cout << "N: ";
    cin >> n;
    cout << par(n) << endl;
    cout << impar(n) << endl;*/
    return 0;
}