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

    return 0;
}
