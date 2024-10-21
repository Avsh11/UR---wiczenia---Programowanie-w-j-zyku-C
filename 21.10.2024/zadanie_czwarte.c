#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//Zadanie 4
int main()
{
	float a;
	float b;
	float c;
	float d;
	float srednia;

	printf("Podaj pierwsza liczbe zmiennoprzecinkowa: \n");

	scanf_s("%f", &a);

	printf("Podaj druga liczbe zmiennoprzecinkowa: \n");

	scanf_s("%f", &b);

	printf("Podaj trzecia liczbe zmiennoprzecinkowa: \n");

	scanf_s("%f", &c);

	printf("Podaj czwarta liczbe zmiennoprzecinkowa: \n");

	scanf_s("%f", &d);

	
	//Srednia arytmetryczna
	srednia = (a + b + c + d) / 4.0;

	printf("%f", srednia);
}
