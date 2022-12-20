/*
Potrzebny OutPut: 
wpisz liczbe n dla oznaczenia wysokoscu trojkata: 
5
wpisana liczba wysokosci: 5
    543210
   543210
  543210
 543210
543210
*/

#include <stdio.h>
#include <math.h> 

int main(void)
{
    int n;
    do 
    {
        printf("wpisz liczbe n dla oznaczenia wysokoscu trojkata: \n");
        scanf("%d", &n);
        printf("wpisana liczba wysokosci: %d\n",n);
    }
    while(n<1);
    
    int b;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
            printf(" ");  

            for(int j=0; j<n+1; j++)
                printf("%d", n-j);
        printf("\n");
    }
    return 0;
}
