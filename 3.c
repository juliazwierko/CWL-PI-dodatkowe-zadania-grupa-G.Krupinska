/*
  Proszę napisać program, który wypisze na ekranie wszystkie liczby podzilne przez
  i niepodzelne przez 5 z przedziału od -5 do 98, a następnie napisze ile ich jest.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() 
{
    int liczenie = 0;

    for(int i = -5; i<=98; i++)
    {
        int mod1 = i%10;
        int mod2 = i%100;
        int mod3 = i%4;

        if( (mod1 != 5) && (mod1 != 0) && (mod1 != -5) )
        {
            if( (mod2 == 0) || (mod3 == 0) )
            { 
                printf("(%d) - jest podzielna przez 4 i niepodzelna przez 5\n", i);
                liczenie += 1;
            }   
        }
    }
    printf("Ilosc Liczb nie podzelnych przez 5 i podzielnych przez 4: %d", liczenie);
  
    printf("\n");
    return 0;
}

/*
OUTPUT:
(-4) - jest podzielna przez 4 i niepodzelna przez 5
(4) - jest podzielna przez 4 i niepodzelna przez 5
(8) - jest podzielna przez 4 i niepodzelna przez 5
(12) - jest podzielna przez 4 i niepodzelna przez 5
(16) - jest podzielna przez 4 i niepodzelna przez 5
(24) - jest podzielna przez 4 i niepodzelna przez 5
(28) - jest podzielna przez 4 i niepodzelna przez 5
(32) - jest podzielna przez 4 i niepodzelna przez 5
(36) - jest podzielna przez 4 i niepodzelna przez 5
(44) - jest podzielna przez 4 i niepodzelna przez 5
(48) - jest podzielna przez 4 i niepodzelna przez 5
(52) - jest podzielna przez 4 i niepodzelna przez 5
(56) - jest podzielna przez 4 i niepodzelna przez 5
(64) - jest podzielna przez 4 i niepodzelna przez 5
(68) - jest podzielna przez 4 i niepodzelna przez 5
(72) - jest podzielna przez 4 i niepodzelna przez 5
(76) - jest podzielna przez 4 i niepodzelna przez 5
(84) - jest podzielna przez 4 i niepodzelna przez 5
(88) - jest podzielna przez 4 i niepodzelna przez 5
(92) - jest podzielna przez 4 i niepodzelna przez 5
(96) - jest podzielna przez 4 i niepodzelna przez 5
Ilosc Liczb nie podzelnych przez 5 i podzielnych przez 4: 21
*/
