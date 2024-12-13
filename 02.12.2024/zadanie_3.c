#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//Zadanie 3 - Napisz program wyznaczający NWD(a,b) metodą rekurencyjną.

int NWD(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return NWD(b, a % b);
}

int main()
{
	int a;
	int b;

	printf("Podaj dwie liczby ktorych nwd poznamy: \n");
	scanf_s("%d",&a);
	scanf_s("%d",&b);

	printf("Najwiekszy wspolny dzielnik liczby %d oraz liczby %d wynosi: %d \n",a,b,NWD(a,b));
	return 0;
}