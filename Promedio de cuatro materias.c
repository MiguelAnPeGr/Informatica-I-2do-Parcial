#include<stdio.h>
main()
{

    float Promedio;
    float CalMate;
    float CalIngles;
    float CalFrans;
    float CalEtica;
    float CalInfo;

    printf("Ingresa tu calificacion en Matematicas:\n");
    scanf("%f",&CalMate);
    printf("Ingresa tu calificacion en Ingles:\n");
    scanf("%f",&CalIngles);
    printf("Ingresa tu calificacion en Frances:\n");
    scanf("%f",&CalFrans);
    printf("Ingresa tu calificacion en Etica:\n");
    scanf("%f",&CalEtica);
    printf("Ingresa tu calificacion en Informatica:\n");
    scanf("%f",&CalInfo);

    Promedio=(CalMate+CalIngles+CalFrans+CalEtica+CalInfo)/5;

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
