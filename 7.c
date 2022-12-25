/*
     5 43210
    54 3210
   543 210
  5432 10
 54321 0
543210 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() 
{   
    int liczba;
    printf("Wpisz licbe: ");
    scanf("%d", &liczba);

    int wysokosc = liczba+1;
    printf("Wysokosc wynosi: %d\n", wysokosc);
    int szerokosc = (wysokosc*2)+1;
    printf("Szerokosc wynos: %d\n", szerokosc);
    int tmp = liczba;

    printf("\n");
    for(int i=0; i<wysokosc; i++)
    {   
        liczba = tmp;
        for(int j=0; j<(wysokosc-i-1); j++)
        {
            printf(" ");
        }
        for(int j=0; j<=i; j++)
        {
            printf("%d", liczba);
            liczba --;
        }
        
        for(int j=0; j<1; j++)
        {
            printf(" ");
        }

        for(int j=0; j<wysokosc-i-1; j++)
        {   
            printf("%d", liczba);
            liczba--;
        }

        printf("\n");
    }


     return 0;
}
