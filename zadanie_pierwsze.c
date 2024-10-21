#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//Zadanie 1//

int main()
{
	int a = 123456;
	int b;

	//Przypadek pierwszy bo niezbyt rozumiem polecenie//

	printf("Oto twoj numer albumu: %d\n", a);

	//Przypadek drugi - uzytkownik sam podaje swoj numer albumu//

	printf("\nPodaj swoj numer albumu: ");

	scanf_s("%d", &b);

	if (b > 999999)
	{
		printf("Nr albumu sklada sie z 6 cyfr, pomyliles sie");
	}
	else if (b <= 999999) 
	{
		printf("Oto twoj numer albumu: %d ", b);
	}
		return 0;
}
	//Jest to troche glupio zrobione ale wiadomo po 999999 nie mamy wiekszej 
	// 6 cyfrowej liczby (nr albumu ma max 6 cyfr) wiec zakres konczy sie na niej.