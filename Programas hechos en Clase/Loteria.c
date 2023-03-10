#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    int menu =0;
    time_t seed = 0;
    srand(time(&seed));
    unsigned int numero = 0;
    unsigned int primera = 0;
    unsigned int segunda = 0;
    unsigned int tercera = 0;



    printf("Loteria Calse Programacion\n");



    do
    {
        printf("\n0 - Salir");
        printf("\n1 - Jugar");
        printf("\nElige una opciion:");
        scanf("%d",&menu);



        if(menu == 1)
        {
            printf("\nIngrea tu numero: ");
            scanf("%d",&numero);



            primera = rand() % 100;
            segunda = rand() % 100;
            tercera = rand() % 100;



            if(numero == primera)
            {
                printf("\nTe sacaste en Primera");
            }else if(numero == segunda)
            {
                printf("\nTe sacaste en Segunda");
            }else if(numero == tercera)
            {
                printf("\nTe sacaste en Tercera");
            }else{



                printf("\nTe guallate\n");
            }



            printf("\nPrimera: %d",primera);
            printf("\nSegunda: %d",segunda);
            printf("\nTercera: %d",tercera);
            printf("\n");
        }



    }while(menu != 0);







    return 0;
}
