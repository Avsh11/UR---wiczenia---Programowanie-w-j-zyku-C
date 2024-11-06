#include <stdio.h>
//Zadanie 2 - Napisz program, który pozwoli na wczytanie 10 liczb i wyznaczeniu ilości oraz sumy liczb
// ujemnych i dodatnich podanych przez użytkownika.

int main()
{
	float liczba[10];
	float sumad = 0;
	float sumau = 0;
	float iloscd = 0;
	float iloscu = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		sumad += liczba[i];
		sumau += liczba[i];
		if (liczba[i] > 0)
		{
			iloscd++;
				sumad += liczba[i];
		}
	}

	printf("SUma liczb dodatnich wynosi: %f\n", sumad);
	printf("Suma liczb ujemnych wynosi: %f\n", sumau);
	printf("\n Ilosc liczb dodatnich wynosi %f", iloscd);
	printf("Ilosc liczb ujemnych wynosi: %f", iloscu);

	return 0;
}