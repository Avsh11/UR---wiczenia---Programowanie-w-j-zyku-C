#include <stdio.h>
#include <string.h>

//Zadanie 2 - W języku C każdemu znakowi alfanumerycznemu odpowiada kod liczbowy nazywany
// kodem ASCII.Napisz program, który wypisze „fragment” tablicy ASCII, czyli wartości kodów
// znaków od ‘a’ do ‘z’, od ‘A’ do ‘Z’ oraz od ‘0’ do ‘9’


int main()
{
	char znak;

	for (znak = 'a'; znak <= 'z'; znak++ )
	{
		printf("%c: %d\n\t", znak, znak);
	}

	for (znak = 'A'; znak <= 'Z'; znak++)
	{
		printf("%c: %d\n\t", znak, znak);
	}

	for (znak = '0'; znak <= '9'; znak++)
	{
		printf("%c: %d\n\t", znak, znak);
	}
	return 0;
}