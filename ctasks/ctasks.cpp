// ctasks.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	setlocale(LC_ALL, "rus");
	std::cout << "input file content: " << std::endl;
	char str[100] = "";
	std::cin >> str;
	std::string input_string = std::string(str);
	std::ofstream fout;
	fout.open("hello.txt");
	fout << input_string;
	fout.close();
	system("pause");
    return 0;
}

