#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define ARRAY_SIZE 10000




int i;
int change;
int n;
int a[ARRAY_SIZE];
int buf;
time_t seed;




int main(int argc, char* argv[])
{
  seed = 0;
  srand(time(&seed));



  n = sizeof(a) / sizeof(*a);




  for (i = 0; i <= n-1; i++)
  {
    a[i] = rand() % 100;
  }



  printf("\n\n--------- DesOrdenados ----------\n");
  for (i = 0; i <= n-1; i++)
  {
    printf("Element a[%d]: %d\n", i, a[i]);
  }



  //algoritmo BubleSort
  change = 1;
  while (change == 1)
  {
    change = 0;
    for (i = 0; i <= n-2; i++)
    {
      if (a[i] > a[i+1])
      {
        buf = a[i];
        a[i] = a[i+1];
        a[i+1] = buf;
        change = 1;
      }
    }
  }



  printf("\n\n--------- Ordenados ----------\n");
  for (i = 0; i <= n-1; i++)
  {
    printf("Element a[%d]: %d\n", i, a[i]);
  }



  return 0;
}
