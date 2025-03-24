
#include <stdio.h>

void convertirMoneda(float cantidad, int de, int a) {
    float tasas[3][3] = {
        {1.0, 0.13, 0.12}, // Quetzales a {Quetzales, Dólares, Euros}
        {7.75, 1.0, 0.91}, // Dólares a {Quetzales, Dólares, Euros}
        {8.50, 1.10, 1.0}  // Euros a {Quetzales, Dólares, Euros}
    };

    if (de < 0 || de > 2 || a < 0 || a > 2) {
        printf("Opción inválida.\n");
        return;
    }

    float resultado = cantidad * tasas[de][a];
    printf("Resultado: %.2f\n", resultado);
}

int main() {
    int opcionDe, opcionA;
    float cantidad;
    
    printf("Seleccione la moneda de origen:\n");
    printf("0: Quetzales (GTQ)\n1: Dólares (USD)\n2: Euros (EUR)\n");
    printf("Ingrese opción: ");
    scanf("%d", &opcionDe);

    printf("Seleccione la moneda de destino:\n");
    printf("0: Quetzales (GTQ)\n1: Dólares (USD)\n2: Euros (EUR)\n");
    printf("Ingrese opción: ");
    scanf("%d", &opcionA);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    convertirMoneda(cantidad, opcionDe, opcionA);

    return 0;
}
