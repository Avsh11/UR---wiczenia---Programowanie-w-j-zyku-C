#include <stdio.h>

//Zadanie 4 - Napisz funkcję, która podnosi podaną liczbę do kwadratu. Parametr do funkcji przekaż poprzez
//wskaźnik.

void potega(float* n)
{
	*n = (*n) * (*n);
}

int main()
{
	float liczba;

	printf("Podaj liczbe ktora zostanie spotegowana do kwadratu: \n");
	scanf_s("%f", &liczba);

	potega(&liczba);

	printf("Liczba po spotegowaniu do kwadratu wynosi: %f \n", liczba);
	
	return 0;
}