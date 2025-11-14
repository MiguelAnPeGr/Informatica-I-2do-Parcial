#include<stdio.h>
main()
{

    int ND;

    printf("Ingresa un numero del 1 al 7\n");
    scanf("%d",&ND);

    if(ND==1)
    {
        printf("El dia selecionado es Lunes");
    }
    if(ND==2)
    {
        printf("El dia selecionado es Martes");
    }
    if (ND==3)
    {
        printf("El dia selecionado es Miercoles");
    }
    if (ND==4)
    {
        printf("El dia selecionado es Jueves");
    }
    if(ND==5)
    {
        printf("El dia selecionado es Viernes");
    }
    if(ND==6)
    {
        printf("El dia selecionado es Sabado");
    }
    if(ND==7)
    {
        printf("El dia selecionado es Domingo");
    }
    if(ND>7)
    {
        printf("Error de datos");
    }
}
