#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//Zadanie 5
int main()
{
	float a;
	float b;
	float operacja;
	char x;
	//scanf_s powoduje blad i nieprawidlowe dzialanie programu ? ? ?
	//Zapytac o to na lekcji
	printf("Podaj pierwsza liczbe: \n");
	scanf("%f", &a);
	printf("Podaj druga liczbe: \n");
	scanf("%f", &b);
	printf("Podaj dzialanie ktore chcesz wykonac: \n");
	scanf("%s", &x);
	

	switch (x)
	{
	case '+': operacja = a + b;
		printf("Wynik dzialania to %f", operacja);
		break;
	case '-': operacja = a - b;
		printf("Wynik dzialania to %f", operacja);
		break;
	case '*': operacja = a * b;
		printf("Wynik dzialania to %f", operacja);
		break;
	case '/': 
		if (b == 0)
		{
			printf("Nie mozna dzielic przez 0");

		}
		else {
			operacja = a / b;
			printf("Wynik dzialania to %f", operacja);
		}
		break;



	}
	return 0;
}