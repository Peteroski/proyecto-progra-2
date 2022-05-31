#include <string>
#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

// Firmas de funciones
void getVotos();

string filePath(string fileName);

int votos[5]; // Este array se llena con el archivo guardado en Archivos/candidatos/votos.txt

bool candidatosSeteados = false;

struct Candidato
{
    string nombre = "";
    string partido = "";
    int votos = 0;
} candidatos[5];

void setCandidatos()
{
    if (!candidatosSeteados)
    {
        // Obtener votos
        getVotos();

        candidatos[0] = { "Gustavo Petro", "Pacto historico", votos[0] };
        candidatos[1] = { "Sergio Fajardo", "Centro esperanza", votos[1] };
        candidatos[2] = { "Federico Guitierrez", "Equipo por Colombia", votos[2] };
        candidatos[3] = { "Rodolfo Hernandez", "Liga de gobernantes anticorrupción", votos[3] };
        candidatos[4] = { "Voto en blanco", "", votos[4] };

        cout << candidatosSeteados << endl << endl;
        candidatosSeteados = true;
    }
}

void getVotos()
{
    ifstream archivo;
    archivo.open(filePath("candidatos/votos.txt"), ios::out);
    
    string voto; // Variable que almacena el texto de la línea iterada en el txt
    int i = 0; // Iterador para guardar votos en array votos[]

    while (!archivo.eof())
    {
        getline(archivo, voto);
        votos[i] = stoi(voto);
        i++;
    }

    archivo.close();
}

void registrarCandidatos()
{
    setCandidatos();
    ofstream archivo;
    
    // Crear archivo con candidatos
    archivo.open(filePath("candidatos/listado.txt"), ios::out);

    for (int i = 0; i < 5; i++)
    {
        archivo << candidatos[i].nombre << ";";
        archivo << candidatos[i].partido << ";";
        archivo << candidatos[i].votos << endl;
    }

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

            // Setear candidatos

            cout << texto << endl << endl;
        }
    }
    archivo.close();
}