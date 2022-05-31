#include <string>
#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

string filePath(string fileName);

struct Persona
{
    int cedula;
    string nombre;
    string clave;
};

struct Candidato
{
    Persona persona;
    string partido;
    int votos;
} candidato1, candidato2, candidato3, candidato4, candidato5;

void registrarCandidato()
{
    ofstream archivo;
    // Candidato candidato1, candidato2, candidato3, candidato4, candidato5;

    candidato1 = { { 12345, "Gustavo Petro", "petroski" }, "Pacto historico", 0};
    candidato2 = { { 23456, "Sergio Fajardo", "fajardoski" }, "Centro esperanza", 0};
    candidato3 = { { 34567, "Federico Guitierrez", "elnea123" }, "Equipo por Colombia", 0};
    candidato4 = { { 45678, "Rodolfo Hernandez", "elinge123" }, "Liga de gobernantes anticorrupción", 0};
    candidato5 = { { 0, "Voto en blanco", "" }, "", 0};

    // Crear archivo con candidatos
    archivo.open(filePath("candidatos.txt"), ios::out);
    
    archivo << candidato1.persona.cedula;
    archivo << candidato1.persona.nombre;
    archivo << candidato1.persona.clave;
    archivo << candidato1.partido;
    archivo << candidato1.votos;
    archivo << endl;

    archivo << candidato2.persona.cedula;
    archivo << candidato2.persona.nombre;
    archivo << candidato2.persona.clave;
    archivo << candidato2.partido;
    archivo << candidato2.votos;
    archivo << endl;

    archivo << candidato3.persona.cedula;
    archivo << candidato3.persona.nombre;
    archivo << candidato3.persona.clave;
    archivo << candidato3.partido;
    archivo << candidato3.votos;
    archivo << endl;

    archivo << candidato4.persona.cedula;
    archivo << candidato4.persona.nombre;
    archivo << candidato4.persona.clave;
    archivo << candidato4.partido;
    archivo << candidato4.votos;
    archivo << endl;

    archivo << candidato5.persona.cedula;
    archivo << candidato5.persona.nombre;
    archivo << candidato5.persona.clave;
    archivo << candidato5.partido;
    archivo << candidato5.votos;


    archivo.close();
}

void verCandidatos()
{
    ifstream archivo;
    archivo.open(filePath("candidatos.txt"), ios::in);
    string texto;

    if (!archivo.fail())
    {
        while (!archivo.eof())
        {
            getline(archivo, texto);
            cout << texto;
        }
    }
    archivo.close();
}