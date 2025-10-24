#include<stdio.h>
main(){

float Promedio;
float CalMate;
float CalIngles;
float CalFrans;
float CalEtica;

printf("Ingresa tu calificacion en Matematicas:\n");
scanf("%f",&CalMate);
printf("Ingresa tu calificacion en Ingles:\n");
scanf("%f",&CalIngles);
printf("Ingresa tu calificacion en Frances:\n");
scanf("%f",&CalFrans);
printf("Ingresa tu calificacion en Etica:\n");
scanf("%f",&CalEtica);

Promedio=(CalMate+CalIngles+CalEtica+CalFrans)/4;

if(Promedio<6){
        printf("Tu promedio total es de %f REPROBASTE",Promedio);
}else{
    printf("Tu promedio total es de %f. APROBASTE",Promedio);
}

}
