#ifndef FUNCTIONS
#define FUNCTIONS

#include "pch.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>

/** Node - w�ze� czyli ka�dy obiekt w drzewie po��cze�
* @param cliName - nazwa wezla np 1,2,5,6
* @param connections - wszystkie po��czenia
* @connectionCounter - licznik ile po��cze� - wyznacznik tablicy connections
*/
struct node {
	std::string cliName;
	node* connections = nullptr;
	int connectionCounter = 0;
};


node* transform(const std::string & client, const std::string & client2, const int & weight);

/** readFile() - czytanie pliku wej�ciowego
* @param fileName - nazwa pliku z kt�rego pobieramy dane
**/
bool readFile(const std::string & fileName);




#endif