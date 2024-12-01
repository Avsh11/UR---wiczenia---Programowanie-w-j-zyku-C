#include <stdio.h>
#include <string.h>
//#include <locale.h>
//Zadanie 3 - . Napisz program sprawdzający ile jest spółgłosek i samogłosek we wprowadzonym tekście.

int main()
{
    //setlocale(LC_ALL, "pl_PL,UTF-8"); //Nie dziala xdd
    //scanf_s nie obsluguje z jakiegos powodu znakow specjalnych zapamietac
    char tekst[1000];
    int ilesa = 0;
    int ilesp = 0;
    printf("Podaj tekst do sprawdzenia: \n");
    fgets(tekst, sizeof(tekst), stdin);  
    char samogloski[18] = { 'a','A','e','E','i','I','o','O','u','U','y','Y','ą','Ą','ę','Ę','ó','Ó' };
    char spolgloski[36] = { 'b','B','c','C','d','D','f','F','g','G','h','H','j','J','k','K','l','L','m','M','n','N','p','P','r','R','s','S','t','T','w','W','z','Z','x','X' };

    for (int i = 0; tekst[i] != '\0'; i++)
    {       
        for (int j = 0; j < 18; j++)
        {
            if (tekst[i] == samogloski[j])  
            {
                ilesa++;
                break;
            }
        }
   
        for (int j = 0; j < 36; j++)
        {
            if (tekst[i] == spolgloski[j]) 
            {
                ilesp++;
                break;
            }
        }
    }




    printf("Ilosc samoglosek w twoim tekscie to: %d\n", ilesa);
    printf("Ilosc spolglosk w twoim tekscie to: %d\n", ilesp);

    return 0;
}
