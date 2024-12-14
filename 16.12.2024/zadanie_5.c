#include <stdio.h>

//Zadanie 5 - Napisz funkcję, która umożliwi policzenie podanej potęgi dla podanej liczby. Parametry
// przekaż poprzez wskaźnik.Funkcja powinna zwrócić wskaźnik do wyniku.

float* potega(float* podstawa, int* wykladnik)
{
	static float wynik;
	wynik = 1.0;

	for (int i = 0; i < *wykladnik; i++)
	{
		wynik *= *podstawa;
	}

	return &wynik;
}

int main()
{
	float liczba;
	int wykladnik;

	printf("Podaj liczbe do spotegowania: \n");
	scanf_s("%f", &liczba);
	printf("Podaj wykladnik potegi: \n");
	scanf_s("%d", &wykladnik);

	float* wynik = potega(&liczba, &wykladnik);

	printf("Wynik potegowania to: %f \n", *wynik);

	return 0;
}