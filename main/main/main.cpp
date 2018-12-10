#include "pch.h"
#include "vld.h" // memory leak detection
#include "Functions.h"

#include <iostream>
#include <fstream>

int main(int argc, char * argv[])
{
	std::string inFileName, outFileName;
	for (int i = 1; i < argc; i++) {
		if (argv[i] == "-i") inFileName = argv[i + 1];
		if (argv[i] == "-d") outFileName = argv[i + 1];
	}

	readFile(inFileName);

	return 0;
}