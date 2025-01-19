#include <stdio.h>
#include <stdlib.h>

//Zadanie 1 - Napisz program, który pobierze z pliku promienie.txt promienie dwóch kół. Twoim
// zadaniem jest stworzenie tego pliku ręcznie(z poziomu systemu operacyjnego),
// następnie otwarcie tego pliku za pomocą C oraz wyznaczenie pól kół i zapianie
// wyników posortowanych rosnąco(najpierw mniejsze pole, następnie większe) do pliku
// wynik.txt.


#define INPUT_FILE "promienie.txt"
#define OUTPUT_FILE "wynik.txt"

double area(double radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    FILE* inputFile, * outputFile;
    double radii[2], areas[2];

    //Otwieranie pliku
    inputFile = fopen(INPUT_FILE, "r");
    if (inputFile == NULL)
    {
        printf("Nie moge otworzyc pliku %s.\n", INPUT_FILE);
        return 1;
    }

    // Wczytanie danych z pliku do tablicy promieni 
    for (int i = 0; i < 2; i++)
    {
        if (fscanf(inputFile, "%lf", &radii[i]) != 1)
        {
            printf("Blad odczytu danych z pliku %s \n", INPUT_FILE);
            fclose(inputFile);
            return 1;
        }
    }

    fclose(inputFile); // Zamkniecie pliku promien.txt


    // Obliczanie pol

    for (int i = 0; i < 2; i++)
    {
        areas[i] = area(radii[i]);
    }

    // Sortowanie rosnaco
    // [3.1]

    if (areas[0] > areas[1])
    {
        double temp = areas[0];
        areas[0] = areas[1];
        areas[1] = temp;

    }

    // Zapis wyników do pliku

    outputFile = fopen(OUTPUT_FILE, "w");
    if (outputFile == NULL)
    {
        printf("Nie mozna otworzyc pliku %s do zapisywania wynikow \n", OUTPUT_FILE);
        return 1;
    }

    for (int i = 0; i < 2; i++)
    {
        fprintf(outputFile, "% .2lf\n", areas[i]);
    }
    fclose(outputFile);
    printf("Wyniki zapisano w pliku %s. \n", OUTPUT_FILE);
    return 0;
}