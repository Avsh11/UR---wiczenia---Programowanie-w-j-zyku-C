#include <stdio.h>

//Zadanie 5 - Wykorzystując funkcje rekurencyjną napisz wykonaj zamianę liczby w systemie
//dziesiętnym na system dwójkowy.

int konwersja(int n)
{
	if (n > 1)
	{
		konwersja(n / 2);
	}
	printf("%d", n % 2);
}

int main()
{
	int liczba;

	printf("Podaj liczbe do zamiany na system dwojkowy: \n");
	scanf_s("%d", &liczba);

	if (liczba == 0)
	{
		printf("Liczba w systemie dziesietnym wynosi: 0 \n");
		printf("Liczba w systemie dwojkowym wynosi: 0 \n");
		return 1;
	}

	printf("Liczba %d w systemie dziesietnym wynosi: \n",liczba);
	printf("Liczba w systemie dwojowym wynosi: \n");
	konwersja(liczba);
	
	return 0;
}