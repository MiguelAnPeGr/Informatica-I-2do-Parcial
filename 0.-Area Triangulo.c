#include<stdio.h>
main(){

float AL;
float BA;
float AR;

printf("Ingrese el valor de la altura de tu triangulo: ");
scanf("%f",&AL);

printf("Ingrese el valor de la base de tu triangulo: ");
scanf("%f",&BA);

AR=(AL*BA)/2;

printf("El valor del area de tu triangulo es: %.2f",AR);

}
