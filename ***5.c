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
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() 
{
    int wysokosc = 6;
    for(int i=0; i<wysokosc; i++)
    {   
        for(int j = wysokosc; j>wysokosc - i; j -= 1)
        {
            printf("_");
        }
        for(int j = 0; j<wysokosc - i; j++)
        {
            printf("*");
        }

        for(int j = (wysokosc); j<(wysokosc*2)-i; j += 1)
        {
            printf("*");
        }

        for(int j = (wysokosc*2); j>(wysokosc*2)-i; j -= 1)
        {
            printf("_");
        }

        printf("\n");
    }
    printf("\n");

    return 0;
}

/*
************
_**********_
__********__
___******___
____****____
_____**_____
*/
