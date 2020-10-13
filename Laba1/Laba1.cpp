// Laba1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	setlocale(0, "");
	int inta = 294;
	unsigned int order = 32; // Количество разрядов
	unsigned int mask = 1 << order - 1;// Маска побитового сравнения
	short int sinta = 30;
	long int linta = -400;
	float floata = -25.8f;
	double douba = 3.14159265;
	long double ldouba = 3.141592653589793l;
	char chara = -45;
	bool boola = 1;
	std::cout << "Output format: \"1. <Size_of_given_variable_type_here> 2. <Size_of_variable_of_that_type_here>.\"" << std::endl;

	std::cout << "sizeof(int)         " << "1. " << sizeof(int)			<< " 2. " << sizeof(inta) << std::endl;
	std::cout << "sizeof(short int)   " << "1. " << sizeof(short int)	<< " 2. " << sizeof(sinta) << std::endl;
	std::cout << "sizeof(long int)    " << "1. " << sizeof(long int)	<< " 2. " << sizeof(linta) << std::endl;
	std::cout << "sizeof(float)       " << "1. " << sizeof(float)		<< " 2. " << sizeof(floata) << std::endl;
	std::cout << "sizeof(double)      " << "1. " << sizeof(double)		<< " 2. " << sizeof(douba) << std::endl;
	std::cout << "sizeof(long double) " << "1. " << sizeof(long double) << " 2. " << sizeof(ldouba) << std::endl;
	std::cout << "sizeof(char)        " << "1. " << sizeof(char)        << " 2. " << sizeof(chara) << std::endl;
	std::cout << "sizeof(bool)        " << "1. " << sizeof(bool)	    << " 2. " << sizeof(boola) << std::endl;

	std::cout << "\n";
	std::cout << "Memory representation of integer-type variable: " << std::endl;
	for (int i = 1; i <= order; i++)
	{
		putchar(inta & mask ? '1' : '0');
		inta <<= 1;
		if (i % 8 == 0)
		{
			putchar(' ');
		}
		if (i % order - 1 == 0)
		{
			putchar(' ');
		}
	}
	std::cout << "\n" << std::endl;
	std::cout << "Memory representation of float-type variable: " << std::endl;
	union {
		int intb;
		float floatb =123.4f;
	};
	for (int i = 1; i <= order; i++)
	{
		putchar(intb & mask ? '1' : '0');
		intb <<= 1;
		if ((i <= 9) and (i % 9 == 0))
		{
			putchar(' ');
		}
		if (i % order - 1 == 0)
		{
			putchar(' ');
		}

	}
	std::cout << "\n" << std::endl;
	std::cout << "Memory representation of double-type variable: " << std::endl;
	union {
		int intarr [2];
		double doubb = 3.14159265;
	};
	for (int i = 1; i <= order; i++)
	{
		putchar(intarr[1] & mask ? '1' : '0');
		intarr[1] <<= 1;
		if ((i <= 16) and (i % 12 == 0))
		{
			putchar(' ');
		}
		if (i % order - 1 == 0)
		{
			putchar(' ');
		}
	}
	for (int i = 33; i <= (order*2); i++)
	{
		putchar(intarr[0] & mask ? '1' : '0');
		intarr[0] <<= 1;
	}
std::cout << "\n";
system("pause");
return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
