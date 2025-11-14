#include<stdio.h>
main(){

float altura;
float base;
float area;
float perimetro;

printf("Ingrese el valor de la base de tu rectangulo:\n");
scanf("%f",&base);

printf("Ingrese la valor de la altura de tu triangulo:\n");
scanf("%f",&altura);

area=altura*base;
perimetro=(base*2)+(altura*2);

printf("El area de tu rectangulo es: %f", area);
printf("El perimetro de tu rectangulo es: %f", perimetro);
}
