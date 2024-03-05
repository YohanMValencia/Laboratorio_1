#include <iostream>

using namespace std;

bool esFechaValida(int mes, int dia) {
    if (mes < 1 || mes > 12) {
        cout << mes << " es un mes invalido." << endl;
        return false;
    }

    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && dia == 29) {
        cout << "Posiblemente ano bisiesto." << endl;
        cout << dia << "/" << mes << " es valida en bisiesto." << endl;
        return true;

    } else if (dia < 1 || dia > diasMes[mes - 1]) {
        cout << dia << "/" << mes << " Es una fecha invalida." << endl;
        return false;
    }

    cout << dia << "/" << mes << " Es una fecha valida." << endl;
    return true;
}

 int Ejercicio_03(){
    int mes, dia;
    cout << "Ingrese el mes (1-12): ";
    cin >> mes;
    cout << "Ingrese el dia: ";
    cin >> dia;


    esFechaValida(mes, dia);

    return 0;
}
