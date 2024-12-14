#include <stdio.h>
#include <stdlib.h>

//Zadanie 3 - Napisz program, w którym wczytasz elementy tablicy, obliczysz ich średnią oraz wpiszesz
// elementy większe od średniej.

int main()
{
	int n;

	printf("Podaj ilosc elementow twojej tablicy: \n");
	scanf_s("%d", &n);

	if (n <= 0)
	{
		printf("Tablica musi miec jakies elementy! \n");
		return 1;
	}

	int* tab = (int*)malloc(n * sizeof(int));
	if (!tab)
	{
		printf("Blad alokacji pamieci! \n");
		return 1;
	}

	printf("Wprowadz %d elementy tablicy: \n", n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &tab[i]);
	}

	int suma = 0;
	for (int i = 0; i < n; i++)
	{
		suma += tab[i];
	}
	float srednia = suma / (float)n;

	printf("Srednia elementow tablicy wynosi: \n", srednia);

	printf("Liczby wieksze od sredniej to: \n");
	for (int i = 0; i < n; i++)
	{
		if (tab[i] > srednia) {
			printf("%d", tab[i]);
		}
	}


	free(tab);
	return 0;
}