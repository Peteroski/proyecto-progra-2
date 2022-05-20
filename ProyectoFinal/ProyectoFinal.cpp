#include <iostream>
#include "ProyectoFinal.h"

using namespace std;

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


// Registra candidatos y los guarda en un archivo (.txt)
void registrarCandidato()
{

}
// Registra partidos políticos y los guarda en un archivo (.txt)
void registrarPartido()
{

}
// Registra regiones y las guarda en un archivo (.txt)
void registrarRegion()
{

}

int main()
{
    menuPrincipal();

    return 0;
}