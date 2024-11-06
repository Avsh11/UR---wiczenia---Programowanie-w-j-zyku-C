#include <stdio.h>
//Zadanie 3 - Dany jest ciąg n liczb (n>0), napisz program pozwalający na obliczenie sumy wszystkich liczb
//parzystych w danym ciągu.
//elementy ciagu naleza do zbioru liczb calkowitych dodatnich.
int main()
{
	int n;
	int suma_n = 0;
	int elementy;

	printf("Podaj dlugosc ciagu liczbowego n: \n");
	scanf_s("%d", &n);
	if (n < 0)
	{
		printf("Ciag musi miec wartosc wieksza niz 0 \n");
		return 1;
	}

	if (n > 0)
	{
		printf("Podaj elementy ciagu: \n");
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &elementy);
			if (elementy % 2 == 0)
			{
				suma_n += elementy;
			}
		}
	}

	printf("Suma liczb parzystych tego ciagu jest rowna: %d \n", suma_n);
	return 0;
}