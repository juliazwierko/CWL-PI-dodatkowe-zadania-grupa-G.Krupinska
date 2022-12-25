#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() 
{   
    double eps=0.0;
    double element = 1.0;
    double mianownik = 1.0;
    double suma = 0.0;

    printf("wpisz wartosc eps: \n");
    scanf("%lf", &eps);

    if((eps>1.0) || (eps<0.0))
    {
        printf("zla wartosc eps\n");
    }
    else
    {
        while(element>=eps)
        {
            suma = suma + element;
            mianownik++;
            printf("%lf\n", element);
            element = 1.0/mianownik;
        }
    }
    printf("%lf", suma);

    printf("\n");
    return 0;
}
