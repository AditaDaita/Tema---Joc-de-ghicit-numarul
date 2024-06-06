// Tema - Joc de ghicit numarul.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int numar;
	std::cout << "Alege un numar intre 1 si 10\n";
	std::cin >> numar;

	if (numar <= 4)
	{
		std::cout << "Numarul introdus este mic, mai incearca!!\n";
	}
	else if (numar == 5)
	{
		std::cout << "Felicitari ai ghicit numarul\n";
	}
	else if(numar >= 6 && numar <= 10)
	{
		std::cout << "Numarul introdus este prea mare, mai incearca!\n";
	}
	



}

