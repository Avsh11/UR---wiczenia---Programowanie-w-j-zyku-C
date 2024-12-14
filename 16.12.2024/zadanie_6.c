#include <stdio.h>

//Zadanie 6 - Napisz funkcję, która wypisuje podany znak podaną liczbę razy. Parametry przekaż poprzez
//wskaźniki.Na zakończenie funkcja powinna zmniejszać o 1, parametr odpowiadający za ilość
//powtórzeń.

void wypiszz(char* znak, int* iloscp)
{
	for (int i = 0; i < *iloscp; i++)
	{
		printf("%c", *znak);
	}

	(*iloscp)--;
}

int main()
{
	char znak;
	int iloscp;

	printf("Podaj znak do wypisania: \n");
	znak = getchar(); //scanf_s do stringów jest do niczego zapamiętać!
	printf("Podaj ilosc powtorzen z jakimi znak zostanie wypisany: \n");
	scanf_s("%d", &iloscp);

	wypiszz(&znak, &iloscp);

	return 0;
}