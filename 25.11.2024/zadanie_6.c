#include <stdio.h>
#include <string.h>

//Zadanie 6 - Mamy dwa ciągi znaków: s1="abcdefghijklmnopqrstuvwxyz", s2="zyxwvutsrqponmlkjihgfedcba".
// Napisz program, który każdej literze ciągu wejściowego znalezionej na pozycji n w ciągu s1 przypisuje
// odpowiadającą jej literę z ciągu s2 na pozycji n, natomiast nie znalezione znaki wypisuje bez zmian.

int main() {

    char s1[] = "abcdefghijklmnopqrstuvwxyz";
    char s2[] = "zyxwvutsrqponmlkjihgfedcba";
    char input[100];
    char output[100];

    printf("Podaj swoj ciag znakow: \n");
    fgets(input, sizeof(input), stdin);

    int i, j;
    for (i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        int found = 0;

        for (j = 0; s1[j] != '\0'; j++) {
            if (ch == s1[j]) {
                output[i] = s2[j];
                found = 1;
                break;
            }
        }

        if (!found) {
            output[i] = ch;
        }
    }

    output[i] = '\0'; 

    printf("Wynik to: %s\n", output);

    return 0;
}