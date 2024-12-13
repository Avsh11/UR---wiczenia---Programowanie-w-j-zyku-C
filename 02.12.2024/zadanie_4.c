#include <stdio.h>

//Zadanie 4 - 

int wynik(int i)
{
	if (i < 3)
	{
		return 1;
	}
	else {

		if (i % 2 == 0)
		{

			return  wynik(i - 3) + wynik(i - 1) + 1;
		}
		else {
			return wynik(i - 1) % 7;
		}
	}
}

int main()
{
	int i;
	scanf_s("%d", &i);
	printf("%d",wynik(i));
	return 0;
	//1 - 1
	//2 - 1
	//3 - 1
	//4 - 3
	//5 - 3
	//6 - 5
	//7 - 5
	//8 - 9
}