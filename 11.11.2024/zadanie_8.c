#include <stdio.h>
//Zadanie 8 - Napisz program dodawania dwóch macierzy.

int main()
{
	//Macierz dodajemy gdy kolumny x wiersze takie same
	int tab[3][3] = {1,2,3,1,2,3,1,2,3};
	int tab2[3][3] = {2,3,4,2,3,4,2,3,4};
	int sumam[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sumam[i][j] = tab[i][j] + tab2[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("\t %d", sumam[i][j]);
		}
		printf("\n");
	}

	return 0;
}