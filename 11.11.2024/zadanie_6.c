#include <stdio.h>
//Zadanie 6 - Dana jest tablica 20 elementowa. Pierwsza połowa tablicy jest wypełniona. Napisz program,
// który wypełni drugą połowę tablicy poprzez kopiowanie kolejnych wartości z pierwszej połowy tablicy.
int main()
{
	int tab[20] = {1,2,3,4,5,6,7,8,9,10};

	for (int i = 10; i < 20; i++)
	{
		tab[i] = tab[i - 10];
		
	}

	for (int i = 0; i < 20; i++)
	{
		printf("\t%d", tab[i]);
	}

	return 0;
}