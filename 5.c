/*
    ABCDEFEDCBA
     ABCDEDCBA
      ABCDCBA
       ABCBA
        ABA
         A 
(przyklad dla literki F)
*/
#include <stdio.h>
#include <math.h>

int main()
{
    char literka;
    printf("Wpisz literke: ");
    scanf("%c", &literka);

    int szerokosc = ((2*(literka-64)) - 1);
    printf("Szerokośc trojkata wynoci: %d\n", szerokosc); //11
    
    int wysokosc = (literka-64);
    printf("Wysokosc trojkata wynosi: %d\n", wysokosc); //6

    
    for(int i=0; i<wysokosc; i++)
    {
        char zmianaliterki = 'A';
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }

        for(int j=0; j<wysokosc-i; j++)
        {
            printf("%c", zmianaliterki);
            zmianaliterki++; 
        }
        zmianaliterki -= 2;
        for(int j=0; j<(szerokosc-wysokosc)-i ; j++)
        {
            printf("%c", zmianaliterki);
            zmianaliterki--;
        }
        for(int j=0; j<i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}

