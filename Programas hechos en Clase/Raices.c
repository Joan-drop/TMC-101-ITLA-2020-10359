#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char opc;
    do{
            float x = 0.0;
 float b = 0.0;
        fflush(stdin);
        printf("\nEscribir el numero decimal:");
 scanf ("%f", &x);

 b = x;
 while(!(b == (x/b)))
 {
  b = 0.5 * ((x/b)+b);
}
 printf("\nLa raiz cuadrada de %f es: %f\n\n",x,b);
 printf("\nPresione Y si quiere ingresar otro numero");
 scanf("%c" ,&opc); } while(opc == 'y' || opc == 'Y');

 return 0;
 }
