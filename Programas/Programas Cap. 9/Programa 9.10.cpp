#include <stdio.h>
/* Alumnos.
El programa pregunta al usuario el número de registro que desea
➥modificar, obtiene el nuevo promedio del alumno y modifica tanto el
➥registro como el archivo correspondiente. */
typedef struct /* Declaración de la estructura alumno. */
{
int matricula;
char nombre[20];
int carrera;
float promedio;
} alumno;
void modifica(FILE *); 
int main(void)
{
FILE *ar;
if ((ar = fopen ("ad1.dat", "r+")) != NULL)
modifica(ar);
else
printf("\nEl archivo no se puede abrir");
fclose(ar);
}
void modifica(FILE *ap)
/* Esta función se utiliza para modificar el promedio de un alumno. */
{
int d;
alumno alu;
printf("\nIngrese el número de registro que desea modificar: ");

scanf("%d", &d);
fseek(ap, (d-1)*sizeof(alumno), 0);
fread(&alu, sizeof(alumno), 1, ap);
/* Luego de posicionarnos en el registro que nos interesa, lo
➥leemos. */
printf("\nIngrese el promedio correcto del alumno: ");
scanf("%f", &alu.promedio); /* Modificamos el registro con el
➥nuevo promedio. */
fseek(ap, (d-1)*sizeof(alumno), 0);
/* Nos posicionamos nuevamente en el lugar correcto para
➥escribir el registro modificado. */
fwrite(&alu, sizeof(alumno), 1, ap);
}