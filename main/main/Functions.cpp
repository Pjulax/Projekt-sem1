#include "pch.h"
#include "Functions.h"


node * transform(const std::string & client, const std::string & client2, const int & weight)
{
	return nullptr;
}

bool readFile(const std::string & fileName)
{
	std::ifstream plik(fileName, std::ios::in);
	if(plik.is_open())
	{
		std::string pakiet = "";
		int i = 0;

		std::string pktA, pktB;
		bool kier;
		float waga;

		while (!plik.eof())
		{
			std::getline(plik, pakiet, ',');
			pakiet.erase(pakiet.begin());
			int j = 0;
			while (pakiet != "")
			{
				
				if (pakiet[j] == ' ' )
				{
					pakiet.erase(0, j);
					j = 0;
				}
				else if (pakiet[j] == ')') {
					pakiet.erase();
					break;
				} 
				else pktA += pakiet[j]; // zrobic by zapisywa³ kolejno do wszystkich zmiennych
				j++;
			}
			pktA.erase(); // czysczenie pktA - zrobic reszte elementow - nie zostawiaj œmieci bo wróc¹ :))
			i++;
		}
		std::cout << pktA;
		return true;
	}
	return false;
}

