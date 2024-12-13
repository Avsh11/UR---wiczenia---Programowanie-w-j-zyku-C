#include <stdio.h>

//Zadanie 1 - Napisz program, który wyznaczy silnię z liczby n sposobem rekurencyjnym.


int silnia(int n)
{
	if (n == 0)
	{
		return 1;

	}
	return silnia(n - 1) * n;
}
int main()
{
	int n;
	
	printf("Podaj n dla ktorego obliczymy silnie: \n");
	scanf_s("%d", &n);

	if (n < 0)
	{
		printf("Silnia nie jest liczona dla liczb ujemnych \n");
	}
	else {
		printf("Silnia liczby %d n wynosi: %d\n",n, silnia(n));
	}
	return 0;
}