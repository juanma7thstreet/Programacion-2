#include <stdio.h>
int main(){
    int horas, cedula, horas_extra=0;
    float salariob, salarion, retencion, paga_hora, sueldo_retenido;
    char nombres[50],apellidos[50], bandera='_', bandera2='_';

    inicio:
    printf("Ingresa tu primer y segundo nombre: \n");
    scanf("%c", &nombres);
    printf("Ingresa tus apellidos: \n");
    scanf("%c", &apellidos);
    printf("Cual es tu numero de cedula?: \n");
    scanf("%d",&cedula);
    printf("Cuantas horas trabajas al dia?: \n");
    scanf("%d", &horas);
    printf("Cuanto te pagan por hora?: \n");
    scanf("%f", &paga_hora);

    do{
        printf("Cual es el porcentaje que tu trabajo retiene de tu salario? \n");
        scanf("%f", &retencion);
    }while(retencion<0||retencion>100);

    printf("Desea ingresar horas extras trabajadas en el mes? \n");
    scanf("%c", bandera);
    if(bandera=='y'){
        printf("\nCuantas horas extra quieres ingresar?\n");
        scanf("%d",&horas_extra);
    }

    salariob=(20*horas*paga_hora)+horas_extra;
    sueldo_retenido=(retencion/100)*salariob;
    salarion=salariob-sueldo_retenido;

    printf("\n%c %c, su salario bruto de este mes es de: %f\n",nombres, apellidos,salariob);
    printf("\nSu salario neto: %f\n", salarion);
    printf("\nEl valor retenido es de: %f\n",sueldo_retenido);
    printf("\nSe ha finalizado el proceso con exito \n");

    printf("Quieres registrar las horas de otra persona?");
    if(bandera2=='y'){
        goto inicio;
    }

    return 0;
}