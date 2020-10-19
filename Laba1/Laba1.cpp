// Laba1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	setlocale(0, "");
	std::cout << "Output format: \" sizeof(<data_type_here>) <Size_of_given_data_type_here>.\"" << std::endl;

	std::cout << "sizeof(int)         "<< sizeof(int)			<< std::endl;
	std::cout << "sizeof(short int)   "<< sizeof(short int)		<< std::endl;
	std::cout << "sizeof(long int)    "<< sizeof(long int)		<< std::endl;
	std::cout << "sizeof(float)       "<< sizeof(float)			<< std::endl;
	std::cout << "sizeof(double)      "<< sizeof(double)		<< std::endl;
	std::cout << "sizeof(long double) "<< sizeof(long double)   << std::endl;
	std::cout << "sizeof(char)        "<< sizeof(char)          << std::endl;
	std::cout << "sizeof(bool)        "<< sizeof(bool)			<< std::endl;
	std::cout << std::endl;

	int inta = 294;
	unsigned int order = 32; // Amount of digits
	unsigned int mask = 1 << order - 1;// Comparison mask
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
	std::cout << std::endl << std::endl;
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
	std::cout << std::endl << std::endl;
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
	std::cout << std::endl << std::endl;
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
