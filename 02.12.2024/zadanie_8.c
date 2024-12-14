#include <stdio.h>

//Zadanie 8 

int funkcja(int x, unsigned int n)
{
	if (n == 1)
	{
		return x;
	}
	else {
		if (n % 3 == 0)
		{
			int k = funkcja(x, n / 3);
			return k * k * k;
		}
		else {
			return x * funkcja(x, n - 1);
		}
	}
}

int main()
{
	int x;
	unsigned int n;

	printf("Podaj x: \n");
	scanf_s("%d", &x);
	printf("Podaj n: \n");
	scanf_s("%d", &n);

	if (n < 0)
	{
		printf("n jest dodatnia liczba calkowita! \n");
	}

	printf("Wykonania rekurencyjne wynik dla %d, %d wynosi: %d", x, n, funkcja(x, n));
	//2 i 10 dla podpunktu a) - 1024


	return 0;
}