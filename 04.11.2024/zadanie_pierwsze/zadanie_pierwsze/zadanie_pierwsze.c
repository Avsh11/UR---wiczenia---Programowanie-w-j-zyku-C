#include <stdio.h>
//Zadanie 1 - Napisz program, w którym użytkownik podaje liczby do momentu wpisania wartości 
// mniejszej od 0, po czym wyświetla sumę, średnią oraz wartość maksymalną dla
// wprowadzonych liczb.

int main()
{
	int liczba, max, licznik = 0;
	float suma = 0, srednia;

	printf("Podaj swoja liczbe: ");
	scanf_s("%d", &liczba);

	max = liczba;

	while (liczba > 0)
	{
		suma += liczba;
		licznik++;

		if (liczba > max) max = liczba;
		printf("Podaj liczbe: ");
		scanf_s("%d", &liczba);
	}
	if (licznik > 0)
	{
		srednia = suma / licznik;
		printf("Suma: %f\n", suma);
		printf("Srednia: %f\n", srednia);
		printf("Wartosc max: %d\n", max);

	}
	else printf("Nie wprowadzono zadnych liczb dodatnich");


	return 0;
}