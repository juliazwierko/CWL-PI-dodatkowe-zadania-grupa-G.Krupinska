/*
    Prosze napisac program, ktory wczytuje 8 znakow(maja to byc
    zera lub jedynki), potem wypisuje je z wykorzystaniem formatu
    %s. Następnie w programie naliezy zamienic lancuch znakow, 
    przedstawiajacy zaois binarny liczby w NBC, na liczbe calkowita 
    bez znaku w systemie (10). Nalezy wykorzystac operator ?
    
    (suma += znak==1 ? pow(2, pot) : 0) - myśli
    01001001 - 71
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() 
{   
    int tab[8]={0};
    printf("Zapisz liczbe z 8 znakow w zapisu (2)\n");
    
    for(int i=0; i<8; i++)
    {
        scanf("%d", &tab[i]);
    }

    printf("\nPodana liczba:\n");
    for(int i=0; i<8; i++)
    {
        printf("%d", tab[i]);
    }
    printf("\n");

    int suma=0;
    int pot = 0;
    int znak;

    for(int i=0; i<8; i++)
    {   
        pot = 7-i;
        printf("liczba potegi: %d\n", pot);

        znak = tab[i];

        int tmp = pow(2, pot);
        printf("2 do potegi %d: %d\n", i, tmp);

        suma += ((znak==1) ? tmp : 0);
        printf("Suma: %d\n", suma);
    }

    printf("%d\n", suma);
    return 0;
}
