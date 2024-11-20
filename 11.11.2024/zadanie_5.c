#include <stdio.h>
#include <string.h>
//Zadanie 5 Użytkownik podaje 2 pierwsze wartości tablicy. Wypełnij pozostałe komórki tablicy
// wartościami, które stanowią sumę wartości z dwóch poprzedzających komórek tablicy.np.: 3, 6, ? , ? , ?
// -> 3, 6, 9, 15, 24.


int main()
{ 
	float tab[100]; //np 100 kolejnych elementów
	
	printf("Podaj pierwsza wartosc tablicy: \n");
	scanf_s("%f", &tab[0]);
	printf("\nPodaj druga wartosc tablicy: ");
	scanf_s("%f", &tab[1]);

			for (int i = 1; i < 9; i++)
		{
			float wartosc = tab[i] + tab[i - 1]; //Suma drugiego i pierwszego elementu.

			tab[i + 1] = wartosc;

			
		}

	for (int i = 0; i < 10; i++)
	{
		printf("\t%f", tab[i]);
	}


return 0;
}