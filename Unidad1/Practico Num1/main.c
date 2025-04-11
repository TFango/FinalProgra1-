#include <stdio.h>
#include <stdlib.h>
#include <time.h>

///**PROTOTIPADO/////////////////////////////////////////////////////////////

///**1er Ejercicio///
//int numeroRandom();
///**2do Ejercicio///
/*int retornarMenor(int num1, int num2, int num3);
int retornarMayor(int num1, int num2, int num3);
int retornarMayor(int num1, int num2, int num3);*/
///**3er Ejercicio///
//int sumarEnterosAnteriores(int num);
///**4to Ejercicio///
//void tablaDeMultiplicar(int num);
///**5to Ejercicio///
/*float funcionSuma(float num1, float num2);
float funcionaResta(float num1, float num2);
float funcionMultiplicacion(float num1, float num2);
float funcionDivision(float num1, float num2);
void calculadora();*/
///**6to Ejercicio///
//void pasarNegativo(int *num);
///**7to Ejercicio///
void cargarNumero(int *num1, int *num2);









///**MAIN////////////////////////////////////////////////////////////////////

int main()
{
    ///**1er Ejercicio/////////////////
    /*int random = numeroRandom();
    printf("El numero random generado es:%d\n", random);*/

    ///**2do Ejercicio/////////////////
    /*int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    fflush(stdin);
    scanf("%i", &num1);

    printf("Ingrese el segundo numero: ");
    fflush(stdin);
    scanf("%i", &num2);

    printf("Ingrese el tercer numero: ");
    fflush(stdin);
    scanf("%i", &num3);

    mostrarMenorYmayor(num1,num2,num3);*/

    ///**3er Ejercicio/////////////////
    /*
    int num, resultado;

    printf("Ingrese un numero entero: \n");
    fflush(stdin);
    scanf("%i", &num);

    resultado = sumarEnterosAnteriores(num);
    printf("El resultado de la suma es: %i", resultado);*/

    ///**4to Ejercicio/////////////////
    /*
    int num = 0;

    printf("Ingrese un numero para mostrar su tabla de multiplicacion: ");
    fflush(stdin);
    scanf("%i", &num);

    tablaDeMultiplicar(num);*/

    ///**5to Ejercicio/////////////////
    //calculadora();

    ///**6to Ejercicio/////////////////
    /*
    int num = 0;

    printf("Ingrese un numero positivo: ");
    fflush(stdin);
    scanf("%i", &num);

    pasarNegativo(&num);
    printf("El numero negativo del ingresado es: %i\n", num);*/

    ///**7mo Ejercicio/////////////////
    int num1, num2;

    cargarNumero(&num1, &num2);

    printf("Los numeros ingresados fueron: %i y %i", num1, num2);




    return 0;
}

///**FUNCIONES////////////////////////////////////////////////////////////////

///**1er Ejercicio////////////////////////////////////////////

/*int numeroRandom()
{
    srand(time(NULL));
    int valor = rand()%101;

    return valor;
}*/
///**2do Ejercicio////////////////////////////////////////////
/*
int retornarMenor(int num1, int num2, int num3)
{
    if(num1 < num2 && num1 < num3)
    {
        return num1;
    }
    else if(num2 < num1 && num2 < num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}

int retornarMayor(int num1, int num2, int num3)
{
    if(num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }

}

void mostrarMenorYmayor(int num1, int num2, int num3){
    int menor = retornarMenor(num1, num2, num3);
    int mayor = retornarMayor(num1, num2, num3);

    printf("El mayor es: %i\n", mayor);
    printf("El menor es: %i", menor);
}
*/

///**3er Ejercicio////////////////////////////////////////////
/*
int sumarEnterosAnteriores(int num)
{
    int suma=0;

    for(int i = 1; i < num; i++){
        suma += i;
    }

    return suma;
}
*/

///**4to Ejercicio////////////////////////////////////////////
/*
void tablaDeMultiplicar(int num)
{
    printf("La tabla de multiplicar del numero %i es: \n", num);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, num, i * num);
    }

}*/

///**5to Ejercicio////////////////////////////////////////////
/*
float funcionSuma(float num1, float num2)
{
    return num1+num2;
}

float funcionaResta(float num1, float num2)
{
    return num1-num2;
}

float funcionMultiplicacion(float num1, float num2)
{
    return num1*num2;
}

float funcionDivision(float num1, float num2)
{
    return num1/num2;
}

void calculadora()
{
    float num1,num2;
    int opcion;

    printf("\nPor favor, seleccione la operación deseada:\n");
    printf("1. Suma (+)\n");
    printf("2. Resta (-)\n");
    printf("3. Multiplicación (*)\n");
    printf("4. División (/)\n");

    printf("Ingrese el número de la operación: ");
    fflush(stdin);
    scanf("%i", &opcion);

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    switch(opcion)
    {
    case 1:
        printf("El resultado de la suma es: %.2f", funcionSuma(num1, num2));
        break;
    case 2:
        printf("El resultado de la resta es: %.2f", funcionaResta(num1, num2));
        break;
    case 3:
        printf("El resultado de la multiplicacion es: %.2f", funcionMultiplicacion(num1, num2));
        break;
    case 4:
        printf("El resultado de la division es: %.2f", funcionDivision(num1, num2));
        break;
    default:
        printf("ERROR: Opcion no valida.");
    }
}*/

///**6to Ejercicio////////////////////////////////////////////
/*
void pasarNegativo(int *num)
{
    if(*num > 0)
    {
        *num = *num * (-1);
    }
    else
    {
        printf("El numero ingresado ya es negativo.\n");
    }
}*/

///**7mo Ejercicio////////////////////////////////////////////
void cargarNumero(int *num1, int *num2)
{
    printf("Ingrese el primer numero: \n");
    fflush(stdin);
    scanf("%i", num1);

    printf("Ingrese el segundo numero: \n");
    fflush(stdin);
    scanf("%i", num2);
}




