#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 

//Zadanie 2 - Napisz program, w którym zadeklarujesz tablicę a następnie:
// • Wypisz na ekran adres jej pierwszego elementu.
// • Wypisz na ekran adres jej czwartego elementu.
// • Napisz program, w którym wylosujesz wartości do tablicy z przedziału podanego przez
// użytkownika i wypiszesz ich adresy.



int main()
{
	int tab[] = { 1,2,3,4,5,6,7,8,9,10 };
	int minimum;
	int maximum;

	printf("Adres pierwszego elemmentu tablicy wynosi: %p \n", &tab[0]);
	printf("Adres czwartego elementu tablicy wynosi: %p \n", &tab[3]);

	printf("Podaj minimalny zakres przedzialu: ");
	scanf_s("%d", &minimum);
	printf("Podaj maksymalny zakres przedzialu: ");
	scanf_s("%d", &maximum);

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		tab[i] = minimum + rand() & (maximum - minimum + 1);
		printf("tab[%d] = %d, Adresy wylosowanych wartosci: %p \n",i, tab[i], &tab[i]);
	}

	return 0;
}

