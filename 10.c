/*
    Prosze napisac program, ktory wypisuje na ekranie reprezentację binarna wczytanej 
    liczby calkowitej. 
    !!!NALEZY KORZYSTAC Z OPIERACJI BITOWYCH 
    Do zapisu nalezy uzyc 9-cio znakowej char liczba[9].
    Nalezy sprawdzic, czy wczytana liczba moze byc zapisana na 8 bitach. 
    elelemnt liczba[8]='\0'
    Program wczyta liczbe i wypisuje jej konwersje (lancuch znakow)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() 
{   
    int liczba;
    printf("Wpisz liczbe w reprezentacji (10): ");
    scanf("%d", &liczba);
    printf("\n");
    
    int reszta=0;
    int tmp;

    char tab[9];
    tab[8]='\0';

    int i=0;

    while((liczba>0) && (i<=8))
    {   
        tmp = liczba;
        liczba = ((liczba)>>1);
        reszta = (tmp - (2*liczba));

        printf("%d\n", reszta);

        tab[7-i]= (reszta+'0');
        i++; 
    }
    printf("%s\n", tab);

    return 0;
}
