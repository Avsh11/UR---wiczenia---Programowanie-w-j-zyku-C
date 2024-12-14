#include <stdio.h>

//Zadanie 8 - Napisz funkcję otrzymującą jako argumenty referencje do dwóch zmiennych typu int, która
// zamienia ze sobą wartości zmiennych, do których referencje dostaliśmy w argumentach.

void zamiana_z(int* a, int*b)
{
	int tymczasowa = *a;
	*a = *b;
	*b = tymczasowa;
}

int main()
{
	int x;
	int y;

	printf("Podaj pierwsza liczbe: \n");
	scanf_s("%d", &x);
	printf("Podaj druga liczbe: \n");
	scanf_s("%d", &y);

	printf("Przed zamiana liczby wygladaja nastepujaco: x = %d, y = %d \n", x, y);

	zamiana_z(&x, &y);
	
	printf("Po zamianie liczby wygladaja nastepujaco: x = %d, y = %d \n",x,y);

	return 0;
}