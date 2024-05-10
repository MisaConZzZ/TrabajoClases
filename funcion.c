#include "funcion.h"
#include <stdio.h>

int ServiBas = 100, Sueldo = 3600, PreciArriendo = 500;

float CalcularGastosTotales(float Gastolog, float GastoMerca) {
    return ServiBas + PreciArriendo + Sueldo + Gastolog + GastoMerca;
}

float CalcularIngresosTotales(float DatoVentas, float SaldoMesAnterior, float Inversiones) { 
    return DatoVentas + SaldoMesAnterior + Inversiones;
}

float CalcularSaldoContable(float TotalIngresos, float TotalGasto) {
    return TotalIngresos - TotalGasto;
}

int CalculaNumMes(int NumMes) {
    return NumMes;
}

void ImprimirDatosResultado(float Gastolog, float GastoMerca, float TotalGasto, float DatoVentas, float Inversiones, float TotalIngresos, float SaldoContable, int NumMes, float SaldoMesAnterior) {
    printf("\nDATOS DEL MES %d", NumMes);
    printf("\n---------------------------------------");
    printf("\nEl valor del servicio básico: %d", ServiBas);
    printf("\nEl valor del precio de arriendo: %d", PreciArriendo);
    printf("\nEl valor del sueldo es: %d", Sueldo);
    printf("\nEl valor del gasto logística es: %.2f", Gastolog);
    printf("\nEl valor del gastos de mercadeo es: %.2f", GastoMerca);
    printf("\nEl total de los gastos es: %.2f", TotalGasto);
    printf("\n---------------------------------------");
    printf("\nEl valor de las ventas es: %.2f", DatoVentas);
    printf("\nEl valor de las inversiones es: %.2f", Inversiones);
    printf("\nEl total de los ingresos es: %.2f", TotalIngresos);
    printf("\nEl saldo contable es: %.2f", SaldoContable); 
    printf("\n---------------------------------------");
}
