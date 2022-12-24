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
    int kwota;
    int wyjscie = 0;
    int mod = 0;
    int module=0;
    int division=0;
    int ilosc_piniedze=0;

    do 
    {
        printf("Proszę wpisać kwotę podzielna przez 5: ");
        scanf("%d", &kwota);
        mod = kwota%5;
        wyjscie += 1;
    
        division = kwota/20;
        ilosc_piniedze += division;
        module = kwota%20;

        if(module==0)
        {
            ilosc_piniedze += 0;
        }
        else if(module==5)
        {
            ilosc_piniedze += 1;
        }
        else if(module==10)
        {
            ilosc_piniedze += 1;
        }
        else if(module==15)
        {
            ilosc_piniedze += 2;
        }
    } while ((wyjscie < 3) && (mod != 0));

    printf("Wpisana kwota: %d\n", kwota);
    printf("Dostepne banknoty:\n1)20 zl\n2)10 zl\n3)5 zl\n");
    printf("Minimana ilosc bamnknot wynosi: %d", ilosc_piniedze);
    
    return 0;
}

/*
OutPut:

Proszę wpisać kwotę podzielna przez 5: 85
Wpisana kwota: 85
Dostepne banknoty:
1)20 zl
2)10 zl
3)5 zl

Minimana ilosc bamnknot wynosi: 5
*/

//85 = 20+20+20+20+5 - 5 banknot i t.d. ...
