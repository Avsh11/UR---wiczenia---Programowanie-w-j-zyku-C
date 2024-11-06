#include <stdio.h>
//Zadanie 5 - Grupa laboratoryjna składa się z n studentów (wartość n podaje użytkownik). Wprowadzamy
// liczbę punktów dla każdego studenta. Napisz program, który obliczy średnią liczbę punktów\
// w grupie z wykorzystaniem pętli while

int main()
{
	int n;
	int punkty;
	int i = 0;
	float suma = 0;
	float srednia = 0;
	printf("Podaj liczbe studentow w grupie laboratoryjnej: \n");
	scanf_s("%d", &n);

	printf("Podaj liczbe punktow dla studentow: \n");
	
	while (i < n)
	{
		scanf_s("%d", &punkty);
		i++;
		suma += punkty;

	}

	srednia = suma / i;

	printf("Srednia liczba punktow w grupie laboratoryjnej wynosi: %f\n",srednia);

	return 0;
}