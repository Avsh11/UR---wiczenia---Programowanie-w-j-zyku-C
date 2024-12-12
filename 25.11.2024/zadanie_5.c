#include <stdio.h>
#include <string.h>
#include <time.h>

//Zadanie 5 - Napisz program w C który wczytuje jedną dodatnią liczbe całkowitą i wypisuje słowami jej cyrfry.

void wypiszCyfre(int cyfra) {

    switch (cyfra) {

    case 0: printf("zero "); 
        break;
    case 1: printf("jeden "); 
        break;
    case 2: printf("dwa "); 
        break;
    case 3: printf("trzy "); 
        break;
    case 4: printf("cztery "); 
        break;
    case 5: printf("pięć "); 
        break;
    case 6: printf("sześć "); 
        break;
    case 7: printf("siedem "); 
        break;
    case 8: printf("osiem "); 
        break;
    case 9: printf("dziewięć "); break;

    default: break;
    }
}

int main() {
    int liczba;

    printf("Podaj dodatnia liczbe całkowita: ");
    if (scanf("%d", &liczba) != 1 || liczba < 0) {
        printf("Podana wartosc nie jest poprawna dodatnia liczba całkowita. \n");
        return 1;
    }


    printf("Cyfry liczby %d to: ", liczba);

    int cyfry[10];
    int indeks = 0;


    do {
        cyfry[indeks] = liczba % 10;
        liczba /= 10;
        indeks++;
    } while (liczba > 0);


    for (int i = indeks - 1; i >= 0; i--) {
        wypiszCyfre(cyfry[i]);
    }

    printf("\n");
    return 0;
}