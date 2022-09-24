// Zahlenraten.Original.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//Der Computer denkt sich ein zufällige Zahl im Bereich 1 bis 100 aus.
	int z = 1 + rand() % 100;

	std::cout << "Errate eine Zahl zwischen 1 und 100\n";
	//Nachdem der Anwender einen Tipp eingegeben hat, antwortet der Computer, ob der Tipp "Zu klein.", "Zu groß." oder "Richtig!" war.
	int e;
	std::cin >> e;
	int g = 0;
	int a = 0;
	while (g == 0)
	{
		if (e == z) { std::cout << "Richtig"; g = 1; std::cout << "du hast" << a << "Versuche gebraucht\n"; std::cin >> e; }
		else if (z > e) { std::cout << "Ihre Zahl ist zu klein\n"; std::cin >> e; }
		else if (z < e) { std::cout << "Ihre Zahl ist zu gross\n"; std::cin >> e; }
		a++;
	}



}
