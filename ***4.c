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
    do 
    {
        printf("Proszę wpisać kwotę podzielna przez 5: ");
        scanf("%d", &kwota);
        mod = kwota%5;
        wyjscie += 1
    } while ((wyjscie < 3) && (mod != 0));

    
    ////////in process/////////
    
  
    
    return 0;
}
