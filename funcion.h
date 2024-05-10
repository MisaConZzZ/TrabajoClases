#ifndef funcion_h
#define funcion_h

float CalcularGastosTotales(float Gastolog, float GastoMerca);
float CalcularIngresosTotales(float DatoVentas, float SaldoMesAnterior, float Inversiones); 
float CalcularSaldoContable(float TotalIngresos, float TotalGasto);
int CalculaNumMes(int NumMes);
void ImprimirDatosResultado(float Gastolog, float GastoMerca, float TotalGasto, float DatoVentas, float Inversiones, float TotalIngresos, float SaldoContable, int NumMes, float SaldoMesAnterior);

#endif
