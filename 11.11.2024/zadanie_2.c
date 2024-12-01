#include <stdio.h>
#include <string.h>
//Zadanie 2 - Do programu z zadania 1 dodaj instrukcje wyswietlajace co druga wartosc z tablicy.

#define ROZMIAR 10

int main()
{
	int tab[ROZMIAR], x = 3;

	for (int i = 0; i < ROZMIAR; i++)
	{
		tab[i] = x;
		x += 3;

		if (tab[i] % 2)
		{
			printf("[%d] %d\t", i, tab[i]);
		}
	}
	return 0;
}