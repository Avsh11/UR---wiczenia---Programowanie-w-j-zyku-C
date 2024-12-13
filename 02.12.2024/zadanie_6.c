#include <stdio.h>

//Zadanie 6 - Napisz funkcje rekurencyjną wyznaczająca ciąg Fibonaccego.

int Fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	if (n > 1)
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

int main()
{
	int n;

	printf("Podaj numer wyrazu w ciagu Fibonacciego: \n");
	scanf_s("%d", &n);
	if (n < 0)
	{
		printf("Wyraz ciagu Fibonacciego nie moze byc mniejszy od 0! \n");
	}
	else {
		printf("%d wyraz ciagu Fibonacciego wynosi: %d \n", n, Fibonacci(n));
	}
	return 0;
}