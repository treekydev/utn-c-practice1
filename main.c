#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();

int main()
{
    ejercicio1();
    return 0;
}


void ejercicio1()
{
    /// Sumar dos números leidos desde el teclado (los ingresa el usuario) y mostrar el resultado por pantalla
    int a;
    int b = 0;
    int result = 0;
    
    printf("Operacion de suma\n");
    printf("_________________\n\n");

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    result = a + b;
    printf("El resultado de la operacion es: %d\n\n", result);
}

void ejercicio2()
{
    // Realizar el algoritmo necesario para que un profesor pueda ingresar las notas
    // obtenidas por un estudiante en su tres exámenes, y luego calcular y mostrar el
    // promedio obtenido por el estudiante

    float n1;
    float n2; 
    float n3;
    float p = 0;

    printf("Calculadora de promedios (3 notas)\n");
    printf("_________________________________\n\n");

    printf("Ingrese la primer nota: ");
    scanf("%f", &n1);

    printf("Ingrese la segunda nota: ");
    scanf("%f", &n2);

    printf("Ingrese la tercer nota: ");
    scanf("%f", &n3);

    p = (n1 + n2 + n3) / 3;
    printf("\nEl promedio total es: %.2f\n\n", p);
}

void ejercicio3()
{
    // Una tienda online ofrece un descuento del 15% sobre el total de la compra y un cliente
    // desea saber cuánto deberá pagar finalmente por su compra
    float desc = 0.15f;
    float total = 0;
    float aPagar = 0;

    printf("TIENDA ONLINE, HOY CON %.0f%% DE DESCUENTO: \n", desc * 100);
    printf("___________________________________________\n\n");

    printf("Ingrese el total de su compra: $");
    scanf("%f", &total);

    aPagar = total * (1 - desc);
    printf("\nEl total a pagar es: $%.2f\n\n", aPagar);
}

void ejercicio4()
{
    // Un profesior desea saber que porcentaje de hombres y que porcentaje de mujeres
    // hay en un grupo de estudiantes.
    int h = 0; 
    int m = 0; 
    int total = 0;

    printf("CALCULADOR DE GRUPOS 2000\n");
    printf("_________________________\n");
    printf("Tu calculador de grupos de confianza!\n\n");

    printf("Ingrese la cantidad de mujeres en su grupo: ");
    scanf("%d", &m);

    printf("Ingrese la cantidad de hombres en su grupo: ");
    scanf("%d", &h);

    total = h + m;

    printf("\nPorcentaje Mujeres: %.2f%%\n", (float)m * 100.0f / (float)total);
    printf("Porcentaje Hombres: %.2f%%\n", (float)h * 100.0f / (float)total);
}

void ejercicio5()
{
    // Desarrolle un algoritmo que resuelva y calcule el area de un circulo.
    // Luego debe mostrar el resultado por pantalla
    const float PI = 3.14159;
    float r = 0;
    float area = 0;

    printf("CALCULADORA DE AREA DE UN CIRCULO\n");
    printf("________________________________\n\n");

    printf("Ingrese el radio del circulo en CM: ");
    scanf("%f", &r);

    area = PI * pow(r, 2);

    printf("\nEl area del circulo es de: %.2fcm²", area);
}

void ejercicio6()
{
    // Escribir un algoritmo que permita que el usuario del sistema ingrese tres datos
    // enteros y luego se muestren por pantalla en orden inverso
    int a = 0;
    int b = 0;
    int c = 0;

    printf("LOS NUMEROS QUE INGRESE SE IMPRIMIRAN AL REVÉS!\n");
    printf("_______________________________________________\n\n");

    printf("Ingrese el primer numero entero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &b);

    printf("Ingrese el tercer numero entero: ");
    scanf("%d", &c);

    printf("\nAqui estan los numeros en orden inverso: \n");
    printf("%d\n", c);
    printf("%d\n", b);
    printf("%d\n\n", a);
}

void ejercicio7()
{
    // Desarrolle un algoritmo que calcule el IVA de cualquier producto
    const float IVA = 0.21;
    float costo = 0;

    printf("CALCULADORA DE IVA\n");
    printf("__________________\n\n");

    printf("Ingresa el costo del producto: ");
    scanf("%f", &costo);

    printf("\nEl IVA del producto es: $%.2f\n\n", costo * (1 - IVA));
}

void ejercicio8()
{
    // Escribir un algoritmo que calcule y realice un porcentaje de descuento al precio de un
    // artículo. El usuario debe ingresar ambos datos por teclado. Mostrar por pantalla el nuevo
    // precio con el descuento

    float costo = 0;
    float desc = 0;

    printf("CALCULALDORA DE DESCUENTOS\n");
    printf("__________________________\n\n");

    printf("Ingrese el costo del producto: ");
    scanf("%f", &costo);

    printf("Ingrese el porcentaje de descuento: ");
    scanf("%f", &desc);

    printf("\nProducto con descuento: $%.2f\n\n", costo * (1 - (desc / 100)));
}
