#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//Zadanie 4 - Wykorzystując algorytm z zadania 3, napisz program który pozwoli użytkownikowi na
// wylosowanie n liczb z przedziału(-10, 45) i obliczy sumę wszystkich liczb parzystych w danym ciągu.

int main()
{
	int n;
	int suma_n = 0;
	int elementy;   
	srand(time(NULL));

	printf("Podaj ilosc losowanych liczb: \n");
	scanf_s("%d", &n);

		for (int i = 0; i < n; i++)
		{
			elementy = rand() % 56 - 10;
			if (elementy % 2 == 0)
			{
				suma_n += elementy;
			}
		}

	printf("Suma liczb parzystych losowanych liczb jest rowna: %d \n", suma_n);
	return 0;
}