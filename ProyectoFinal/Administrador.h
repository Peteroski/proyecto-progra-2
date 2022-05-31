#include <string>
#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

string filePath(string fileName);

void registrarElector()
{
	ofstream archivo;
	string nombre = filePath("electoreads.txt");

	// char texto [20];
	string texto;

	cout << "Texto: ";
	getline(cin, texto);

	// 
	archivo.open(nombre, ios::app);

	if (archivo.fail())
	{
		cout << "No se pudo abrir el archivo";
		exit(1);
	}

	archivo << texto << "\n";
	archivo.close();

	// Leer archivo
	
	system("cls");
	printf("Elector registrado...\n");
	system("pause");	
}

void editarElector()
{
	system("cls");
	printf("Elector actualizado...\n");
	system("pause");
	
}

void eliminarElector()
{
	system("cls");
	printf("Elector eliminado...\n");
	system("pause");
	
}

// Registra candidatos y los guarda en un archivo (.txt)
void registrarCandid()
{
	system("cls");
	printf("Candidato registrado...\n");
	system("pause");
	
}

// Registra regiones y las guarda en un archivo (.txt)
void registrarRegion()
{
	system("cls");
	printf("Región registrada...\n");
	system("pause");
	
}
void iniciarEleccion()
{
	system("cls");
	printf("Elección habilitada, reiniciando sistema...\n");
	system("pause");
}

void finalizarEleccion()
{
	system("cls");
	printf("Elección finalizada, obteniendo resultados...\n");
	system("pause");
	
}