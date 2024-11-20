#include <stdio.h>
//Zadanie 7 - Napisz program obliczania sumy elementów przekątnej głównej macierzy.
int main()
{
	int tab[3][3] = { 1,2,3,1,2,3,1,2,3 }; //1 - Kolumny 2 - Wiersze 
	int suma = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j) {
				suma += tab[i][j];
			}
		}
	}

	printf("Suma wartosci przekatnych jest rowna: ");
	printf("%d", suma);


	return 0;
}