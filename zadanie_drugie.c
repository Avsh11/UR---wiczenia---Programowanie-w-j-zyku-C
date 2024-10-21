#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//Zadanie 2
int main() 
{
	int a;

	printf("Podaj swoja liczbe calkowita: \n");

	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("\nLiczba a jest liczba parzysta");
	}
	else {
		printf("\nLiczba a nie jest liczba parzysta");
	}
	
	return 0;
}