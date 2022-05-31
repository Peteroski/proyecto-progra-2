#include <iostream>
#include "ProyectoFinal.h"

using namespace std;

int eleccionHabilitada = false;
int segundaVuelta = false;
string folderPath = "C:/Users/andre/CLionProjects/Proyecto final/proyecto-progra-2/ProyectoFinal/Archivos/";

string filePath(string fileName)
{
    return folderPath + fileName;
}

struct Region
{
    string nombre;
};




struct Elector
{
    struct Persona;
    struct Region;
};

int main()
{
    menuPrincipal();
    return 0;
}