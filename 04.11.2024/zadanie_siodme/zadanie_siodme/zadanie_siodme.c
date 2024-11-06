#include <stdio.h>
//Zadanie 7 - W oparciu o podany fragment kodu, zmodyfikuj kod tak aby uzyskać następujące rezultaty:
/*int i, j;
for (i = 0; i < 10; i++) {
	for (j = 0; j <= i; j++)
		printf("X");
	printf("\n");
}*/


int main()
{
	//Przypadek 1 - Gora > lewo dol
	int i, j;
	for (i = 0; i < 10; i++) 
	{
		for (j = 10; j > i; j--)
		printf("X");
		printf("\n");
	}

	printf("\n\n");
	//Przypadek 2 - Dol > prawo gora
	int k;
	for (i = 0; i < 10; i++)
	{
		for (k = 9; k > i; k--) 
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("X");
		}
		printf("\n");
	}

	printf("\n\n");
	//Przypadek 3 - Gora > prawo dol

	for (i = 0; i < 10; i++)
	{
		for (int k = 0; k < i; k++) 
		{
			printf(" ");
		}
		for (j = 10; j > i; j--)
		{
			printf("X");
		}
		printf("\n");
	}

	printf("\n\n");
	//Przypadek 4 - Pelny trojkat
	//??????
	//Do zrobienia

	return 0;
}