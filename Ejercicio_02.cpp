#include <iostream>

using namespace std;


 void calcularBilletesMonedas(int cantidad){

      int billetes[] = {50000, 20000, 10000, 5000, 2000, 1000};

      int monedas[] = {500, 200, 100, 50};

      int cantidadBilletes[sizeof(billetes) / sizeof(billetes[0])];

      int cantidadMonedas[sizeof(monedas) / sizeof(monedas[0])];

    // Inicializar todas las cantidades a 0
    for (size_t i = 0; i < sizeof(billetes) / sizeof(billetes[0]); ++i)
        cantidadBilletes[i] = 0;

    for (size_t i = 0; i < sizeof(monedas) / sizeof(monedas[0]); ++i)
        cantidadMonedas[i] = 0;

    // Calcular cantidad de billetes y monedas
    for (size_t i = 0; i < sizeof(billetes) / sizeof(billetes[0]); ++i) {
        cantidadBilletes[i] = cantidad / billetes[i];
        cantidad %= billetes[i];
    }

    for (size_t i = 0; i < sizeof(monedas) / sizeof(monedas[0]); ++i) {
        cantidadMonedas[i] = cantidad / monedas[i];
        cantidad %= monedas[i];
    }

    // Imprimir resultado
    cout << "Cantidad de billetes y monedas:" << endl;

    for (size_t i = 0; i < sizeof(billetes) / sizeof(billetes[0]); ++i)
        cout << billetes[i] << " : " << cantidadBilletes[i] << endl;

    for (size_t i = 0; i < sizeof(monedas) / sizeof(monedas[0]); ++i)
        cout << monedas[i] << " : " << cantidadMonedas[i] << endl;

    // Imprimir faltante
    if (cantidad > 0)
        cout << "Faltante: " << cantidad << endl;
    else
        cout << "No hay faltante." << endl;
    }
 int Ejercicio_02(){
     int cantidad;
     cout << "Ingrese la cantidad de dinero: ";
     cin >> cantidad;

     calcularBilletesMonedas(cantidad);

     return 0;
 }
