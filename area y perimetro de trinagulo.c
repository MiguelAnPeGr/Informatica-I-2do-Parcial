#include<stdio.h>
main(){

float altura;
float base;
float area;
float perimetro;

printf("Ingrese el valor de la base de tu triangulo:\n");
scanf("%f",&base);

printf("Ingrese la valor de la altura de tu triangulo:\n");
scanf("%f",&altura);

area=(altura*base)/2;
perimetro=base*3;

printf("El area de tu triangulo es: %f", area);
printf("El perimetro de tu triangulo es: %f", perimetro);
}
