#include<stdio.h>
main()
{

    float Promedio;
    float CalMate;
    float CalIngles;
    float CalFrans;

    printf("Ingresa tu calificacion en Matematicas:\n");
    scanf("%f",&CalMate);
    printf("Ingresa tu calificacion en Ingles:\n");
    scanf("%f",&CalIngles);
    printf("Ingresa tu calificacion en Frances:\n");
    scanf("%f",&CalFrans);

    Promedio=(CalMate+CalIngles+CalFrans)/3;

    if(Promedio<6)
    {
        printf("Tu promedio total es de %f REPROBASTE Te vas a Extraordinario",Promedio);
    }
    if(Promedio>=6)
    {
        printf("Tu promedio total es de %f. APROBASTE",Promedio);
    }
    if(Promedio>=9)
    {
        printf("Tu promedio total es de %f. EXENTASTE",Promedio);
    }

}
