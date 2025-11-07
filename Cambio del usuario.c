#include<stdio.h>
main(){

float precio;
float DiPa;
float Cam;

printf("Ingrese el valor del articulo comprado:\n");
scanf("%f",&precio);

printf("Ingrese la cantidad de dinero que el cliente pago:\n");
scanf("%f",&DiPa);

Cam=DiPa-precio;

if(Cam<0){
        Cam=Cam*-1;
        printf("Al cliente le hizo falta pagar: $%f",Cam);
}else{
        printf("Le bebes dar $%f al cliente:\n",Cam);
}

}
