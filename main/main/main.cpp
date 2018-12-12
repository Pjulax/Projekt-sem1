#include "pch.h"
#include "vld.h" // memory leak detection
#include "Functions.h"

#include <iostream>
#include <fstream>

int main(int argc, char * argv[])
{
	std::string inFileName, outFileName;

	for (int i = 2; i < argc; i+=2) {
		if (argv[i-1][0] == '-' && argv[i-1][1] == 'i') inFileName = argv[i];
		if (argv[i - 1][0] == '-' && argv[i - 1][1] == 'd') outFileName = argv[i];
	}

	readFile(inFileName);

	return 0;
}