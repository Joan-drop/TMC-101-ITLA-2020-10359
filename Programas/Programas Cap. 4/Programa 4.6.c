#include <stdio.h>
/* Prueba de par�metros por referencia. */
void f1(int *);
/* Prototipo de funci�n. El par�metro es de tipo entero y por referencia
�observa el uso del operador de indirecci�n. */
void main(void)
{
int I, K = 4;
for (I = 1; I <= 3; I++)
{
printf("\n\nValor de K antes de llamar a la funci�n: %d", ++K);
printf("\nValor de K despu�s de llamar a la funci�n: %d", f1(&K));
}
}
void f1(int *R)
{
*R += *R;
}
