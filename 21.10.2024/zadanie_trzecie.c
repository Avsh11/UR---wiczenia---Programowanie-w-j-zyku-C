#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//Zadanie 3
int main()
{
	float a;
	float b;

	printf("Podaj pierwsza liczbe zmiennoprzecinkowa: \n");

	scanf_s("%f", &a);

	printf("\nPodaj druga liczbe zmiennoprzecinkowa: ");

	scanf_s("%f", &b);

	if (a > b)
	{
		printf("Liczba a jest wieksza od liczby b\n");
	}
	else if(a < b) 
	{
		printf("\nLiczba a jest mniejsza od liczby b");
	}
	else if (a == b) 
	{
		printf("Liczby a i b sa rowne\n");
	}
	return 0;
}