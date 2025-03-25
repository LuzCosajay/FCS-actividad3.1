#include <stdio.h>

// Definir las tasas de cambio (puedes actualizar las tasas con valores reales)
#define GTQ_TO_USD 0.13  // 1 GTQ = 0.13 USD (esto es solo un ejemplo)
#define GTQ_TO_EUR 0.12  // 1 GTQ = 0.12 EUR (esto es solo un ejemplo)
#define USD_TO_GQ 7.75   // 1 USD = 7.75 GTQ (esto es solo un ejemplo)
#define USD_TO_EUR 0.91  // 1 USD = 0.91 EUR (esto es solo un ejemplo)
#define EUR_TO_GQ 8.15  // 1 EUR = 8.15 GTQ (esto es solo un ejemplo)
#define EUR_TO_USD 1.1  // 1 EUR = 1.1 USD (esto es solo un ejemplo)

void convertirMoneda(double cantidad, int origen, int destino);

int main() {
    double cantidad;
    int origen, destino;

    printf("Bienvenido al Conversor de Monedas\n");
    printf("Opciones disponibles:\n");
    printf("1. Quetzales (GTQ)\n");
    printf("2. Dolares (USD)\n");
    printf("3. Euros (EUR)\n");

    // Elegir la moneda de origen
    printf("\nSeleccione la moneda de origen (1-3): ");
    scanf("%d", &origen);

    // Elegir la moneda de destino
    printf("Seleccione la moneda de destino (1-3): ");
    scanf("%d", &destino);

    // Pedir la cantidad a convertir
    printf("Ingrese la cantidad a convertir: ");
    scanf("%lf", &cantidad);

    // Llamar a la función de conversión
    convertirMoneda(cantidad, origen, destino);

    return 0;
}

void convertirMoneda(double cantidad, int origen, int destino) {
    double resultado = 0.0;

    // Caso cuando la moneda de origen es Quetzales (GTQ)
    if (origen == 1) {
        if (destino == 2) {
            resultado = cantidad * GTQ_TO_USD;
            printf("%.2f Quetzales equivalen a %.2f Dolares\n", cantidad, resultado);
        } else if (destino == 3) {
            resultado = cantidad * GTQ_TO_EUR;
            printf("%.2f Quetzales equivalen a %.2f Euros\n", cantidad, resultado);
        } else {
            printf("No se puede convertir de Quetzales a Quetzales\n");
        }
    }

    // Caso cuando la moneda de origen es Dolares (USD)
    else if (origen == 2) {
        if (destino == 1) {
            resultado = cantidad * USD_TO_GQ;
            printf("%.2f Dolares equivalen a %.2f Quetzales\n", cantidad, resultado);
        } else if (destino == 3) {
            resultado = cantidad * USD_TO_EUR;
            printf("%.2f Dolares equivalen a %.2f Euros\n", cantidad, resultado);
        } else {
            printf("No se puede convertir de Dolares a Dolares\n");
        }
    }

    // Caso cuando la moneda de origen es Euros (EUR)
    else if (origen == 3) {
        if (destino == 1) {
            resultado = cantidad * EUR_TO_GQ;
            printf("%.2f Euros equivalen a %.2f Quetzales\n", cantidad, resultado);
        } else if (destino == 2) {
            resultado = cantidad * EUR_TO_USD;
            printf("%.2f Euros equivalen a %.2f Dolares\n", cantidad, resultado);
        } else {
            printf("No se puede convertir de Euros a Euros\n");
        }
    }

    // Caso cuando la opción no es válida
    else {
        printf("Opción de moneda inválida\n");
    }
}
