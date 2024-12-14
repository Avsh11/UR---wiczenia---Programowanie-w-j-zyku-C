#include <stdio.h>

//Zadanie 7 - Napisz funkcję otrzymującą jako argumenty wskaźniki do dwóch zmiennych typu int, która:
// • zwraca jako wartość mniejszą z liczb wskazywanych przez argumenty.
// • zwraca jako wartość wskaźnik na zmienną przechowującą mniejszą z liczb wskazywanych
// przez argumenty.

int* liczby_m(int* a, int* b)
{
	static int m;
	if (*a < *b)
	{
		m = *a;
	}
	else {
		m = *b;
	}
	return &m;
}

int main()
{
	int x;
	int y;
	printf("Podaj pierwsza liczbe: \n");
	scanf_s("%d", &x);
	printf("Podaj druga liczbe: \n");
	scanf_s("%d", &y);

	int* mniejsza = liczby_m(&x, &y);


	printf("Mniejsza liczba jest: %d \n", *mniejsza);
	printf("Adres tej mniejszej liczby wynosi: %p \n", (void*)mniejsza);

	return 0;
}