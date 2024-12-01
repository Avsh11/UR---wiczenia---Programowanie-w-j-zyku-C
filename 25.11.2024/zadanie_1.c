#include <stdio.h>
#include <string.h>

//Zadanie 1 - Napisz program, w którym zaprezentujesz użycie obiektu klasy std::string w celu
//inicjalizacji, przechowywania danych wejściowych użytkownika oraz kopiowania, łączenia i określenia
//długości ciągu tekstowego.

int main()
{
	char name[100] = "Jan Kowalski";
	char album[] = "123456";

		strcat(name, album);
		printf("\nPolaczone teksty %s\n", name);

		strcpy(name, album);
		printf("Skopiowany tekst %s\n", name);


		size_t len = strlen(name);
		printf("Dlugosc tekstu wynosi: %lu", len);




	return 0;
}