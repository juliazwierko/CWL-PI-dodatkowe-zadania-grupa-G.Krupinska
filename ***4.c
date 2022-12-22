/*
    Proszę napisać program, ktory wczyta kwote podzielną przez 5 
    (wczytujemy nie wiecej niz 3 razy - jeśli po 3 probach nadal
    zla wartosc -> komunikat i wyjscie z programu), a następnie 
    wypisze jak wyplacic ja minimalna iloscia banknotow. Mamy do
    dyspozycji banknoty o nominalach 20, 10 oraz 5.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() 
{
    printf("Wpisz kwotę: ");
    int kwota1;
    int kwota2;
    int kwota3;

    scanf("%d", &kwota1);

    int mod1 = kwota1%10;
    if ((mod1!= 5 && mod1 != -5 && mod1 !=0))
    {
        printf("Wpisz kwote podzelna przez 5.\n");
        scanf("%d", &kwota2);
        int mod2 = kwota2%10;
        if ((mod2 != 5 && mod2 != -5 && mod2 != 0))
        {
            printf("Wpisz kwote podzelna przez 5.\n");
            scanf("%d", &kwota3);
            int mod3 = kwota3%10;
            if ((mod3!= 5 && mod3 != -5 && mod3 !=0))
            {
                printf("");
            }
        }
    }
    else 
    {
        printf("Kwota zostala wpisana poprawno\n");
    }

////////////////in process//////////////// 
  
    return 0;
}
