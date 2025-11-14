#include<stdio.h>
main(){

float M;
float R;

printf("Ingresa los metros cuadrados de tu terreno\n");
scanf("%f",&M);

if(M<=500){

    R=M*750;

    printf("El costo de tu terreno es %f", R);

    }if(M>500){

    R=(M*750)-((M*750)/10);
printf("El costo de tu terreno es de: %f", R);

}
}
