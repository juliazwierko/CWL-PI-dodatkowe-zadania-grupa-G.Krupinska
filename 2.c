/* 
  Proszę napisać program, który wylosuje 20 liczb pseudokodowych 
  od 118 do 286, wypisze na ekran najmniejszą i największą oraz 
  śriednią arytmetyczną wylosowanych liczb.
*/

#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int i_rand(int min, int max) 
{
  return rand() % (max - min + 1) + min; 
} 

int main(void) 
{ 
  srand(time(NULL)); 
  int tab[20] = {0};
  float Suma = 0.;

  printf("Wylosowane 20 liczb: \n");
  for (int i = 0; i<=20; i++)
  {
    tab[i] = i_rand(118, 286);
    Suma = Suma + tab[i];
    printf("(%d) - %d\n", i, tab[i]);
  }
  
  int max = 0;
  for (int i = 0; i <= 20; i++){
    if (tab[i] > max)
    {
      max = tab[i];
    }
  }  
  printf("\n");
  printf("Najwiekszy element: %d\n",  max);

  int min;
  for (int j = 0; j <= 20; j++){
    if (min > tab[j])
    {
      min = tab[j];
    }
  }  
  printf("Najmniejszy element: %d\n",  min);
  
  double Sriednia = Suma/20;
  printf("Suma: %f\n", Suma);
  printf("Sriednia arytmetyczna: %f\n", Sriednia);
  
  return 0; 
}
