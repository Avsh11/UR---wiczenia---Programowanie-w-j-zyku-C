#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Zadanie 1 - Napisz program, który:
// • wypisze na ekran adres zadeklarowanej zmiennej,
// • pobierze wartość zmiennej, wypisze na ekran jej adres oraz wartość,
// • przy użyciu wskaźników obliczy różnicę dwóch liczb,
// • przy użyciu wskaźników obliczy średnią trzech liczb

int main()
{
	int zmienna;
	int* wskaznik = &zmienna;
	printf("Adres zadeklarowanej zmiennej to: %p \n", wskaznik);

	printf("Podaj wartosc zmiennej: \n");
	scanf_s("%d", &zmienna);

	printf("Wartosc zmiennej wynosi: %d\n", zmienna);
	printf("Adres zmiennej wynosi: %p\n", wskaznik);


	float roznica1;

	float* wskaznik1 = &roznica1;

	float roznica2;

	float* wskaznik2 = &roznica2;

	float wynik1;

	printf("Podaj pierwsza liczbe do odejmowania: \n");
	scanf_s("%f", wskaznik1);
	printf("Podaj druga liczbe do odejmowania: \n");
	scanf_s("%f", wskaznik2);
	wynik1 = *(wskaznik1) - *(wskaznik2);
	printf("Wynik roznicy wynosi: %f \n", wynik1);
	

	float liczba1;
	float* ws1 = &liczba1;
	float liczba2;
	float* ws2 = &liczba2;
	float liczba3;
	float* ws3 = &liczba3;
	float wynik;
	float srednia;

	printf("Podaj wartosc pierwszej liczby: \n");
	scanf_s("%f", ws1);
	printf("Podaj wartosc drugiej liczby: \n");
	scanf_s("%f", ws2);
	printf("Podaj wartosc trzeciej liczby: \n");
	scanf_s("%f", ws3);

	wynik = *(ws1)+*(ws2)+*(ws3);
	srednia = wynik / 3;

	printf("Srednia tych liczb wynosi: %f\n", srednia);


	return 0;




}