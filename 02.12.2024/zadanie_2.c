#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//Zadanie 2 - Napisz program wyznaczający n - ty wyraz ciągu zdefiniowanego przez następujący
// wzór rekurencyjny :
//𝑎𝑛 = {
//−1 𝑑𝑙𝑎 𝑛 = 1
//−𝑎𝑛−1 ∙ 𝑛 − 2 𝑑𝑙𝑎 𝑛 > 1

int wyraz(int n)
{
	if (n == 1)
	{
		return -1;
	}

	if (n > 1)
	{
		return -wyraz(n-1) * (n - 2);
	}

}

int main()
{
	int n;

	printf("Podaj wyraz: \n");
	scanf_s("%d",&n);

    int wynik = wyraz(n);
    printf("%d wyraz ciagu to: %d\n", n, wynik);


	return 0;
}