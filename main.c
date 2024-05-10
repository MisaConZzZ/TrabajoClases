#include <stdio.h>
#include "funcion.h" 

int main() {
    int NumMes;

    printf("Ingresa el número de meses: ");
    scanf("%d", &NumMes);

    for (int i = 0; i < NumMes; i++) {
        float Gastolog, GastoMerca, DatoVentas, Inversiones, TotalGasto, TotalIngresos, SaldoContable, SaldoMesAnterior = 0.0;

        printf("\nIngrese los gastos de logística para el mes : ");
        scanf("%f", &Gastolog);

        printf("Ingrese los gastos de mercadeo para el mes : ");
        scanf("%f", &GastoMerca);

        TotalGasto = CalcularGastosTotales(Gastolog, GastoMerca);

        TotalIngresos = CalcularIngresosTotales(0, SaldoMesAnterior, 0); 
        SaldoContable = CalcularSaldoContable(TotalIngresos, TotalGasto);

        printf("Ingrese el número de ventas para el mes :");
        scanf("%f", &DatoVentas);

        printf("Ingrese el número de inversiones para el mes : ");
        scanf("%f", &Inversiones);

        TotalIngresos = CalcularIngresosTotales(DatoVentas, SaldoMesAnterior, Inversiones);
        SaldoContable = CalcularSaldoContable(TotalIngresos, TotalGasto);

        ImprimirDatosResultado(Gastolog, GastoMerca, TotalGasto, DatoVentas, Inversiones, TotalIngresos, SaldoContable, i + 1, SaldoMesAnterior);


        SaldoMesAnterior = SaldoContable;
    }

    return 0;
}
