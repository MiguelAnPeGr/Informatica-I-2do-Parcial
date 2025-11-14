#include<stdio.h>
main()
{

    float N1;
    float N2;
    float R;

    printf("Ingresa tu primer numero:\n");
    scanf("%f",&N1);

    printf("Ingresa tu segundo numero:\n");
    scanf("%f",&N2);

    R=N1+N2;

    if(R<0){
        printf("Tu numero es negativo");
    }if(R==0){
    printf("Tu numero es Cero");
    }if(R>0){
        printf("Tu numero es positivo");
    }
}

