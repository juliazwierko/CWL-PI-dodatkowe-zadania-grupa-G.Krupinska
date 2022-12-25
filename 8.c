/*
    Prosze napisac program, ktory wczyta liczbe calkowita i sprawdzi czy to
    liczba pierwsza. Nalezy odpowiedni komunikat. Jezeli liczba nie jest 
    pierwsza - nalezy jej wszystkie podzielniki.
    //musi byc pierwiatek - double sqrt(double);
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() 
{   
    int liczba2;
    int count2;
    printf("\n\nWpisz liczbe: ");
    scanf("%d", &liczba2);

    double pierwiastek = sqrt(liczba2);
    printf("Pierwiatek wpisanej liczby: %f\n", pierwiastek);
    printf("Dzielniki liczby:\n");
    for(int k=0; k<pierwiastek; k++)
    {
        if((liczba2%k)==0)
        {
            printf("%d\n", k);
            printf("%d\n", liczba2/k);
            count2 += 2;
        }
    }

    if(count2==2)
    {
        printf("liczba jest pierwsza.");
    }
    else 
    {
        printf("liczba nie jest pierwsza.\n");
    }

    return 0;
}

/*
  OUTPUT
Wpisz liczbe: 14
Pierwiatek wpisanej liczby: 3.741657
Dzielniki liczby:
1
14
2
7
liczba nie jest pierwsza.

/////////////2/////////////

Wpisz liczbe: 17
Pierwiatek wpisanej liczby: 4.123106
Dzielniki liczby:
1
17
liczba nie jest pierwsza.
*/
