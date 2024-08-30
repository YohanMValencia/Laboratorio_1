#include <iostream>

using namespace std;

void Problema_1();
void Problema_3();
void Problema_5();
void Problema_7();
void Problema_9();
void Problema_11();
void Problema_13();
void Problema_15();
void Problema_17();


int main()
{
    Problema_3();

    return 0;

}

void Problema_1()
{
    cout << "*** PROBLEMA 1 ***" << endl << endl;

    char caracter;
    cout << "Ingrese un caracter: ";
    cin >> caracter;

    char minuscula = tolower(caracter);

    if (minuscula == 'a' || minuscula == 'e' || minuscula == 'i' || minuscula == 'o' || minuscula == 'u'){
        cout << endl << caracter << " Es una vocal." << endl << endl;
    }
    else if (minuscula == 'b' || minuscula == 'c' || minuscula == 'd' || minuscula == 'f' || minuscula == 'g' ||
             minuscula == 'h' || minuscula == 'j' || minuscula == 'k' || minuscula == 'l' || minuscula == 'm' ||
             minuscula == 'n' || minuscula == 'p' || minuscula == 'q' || minuscula == 'r' || minuscula == 's' ||
             minuscula == 't' || minuscula == 'v' || minuscula == 'w' || minuscula == 'x' || minuscula == 'y' ||
             minuscula == 'z'){
       cout << endl << caracter << " Es una consonante." << endl << endl;
    }
    else {
        cout << endl << caracter << " No es una letra." << endl << endl;
    }
}


void Problema_3()
{
    int mes, dia;

    cout << "*** PROBLEMA 3 ***" << endl << endl;

    cout << "Ingrese el mes (1-12): ";
    cin >> mes;

    if (mes < 1 || mes > 12) {
        cout << endl << mes << " es un mes invalido." << endl << endl;
        return;
    }

    cout << endl << "Ingrese el dia: ";
    cin >> dia;

    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && dia == 29) {
        cout << endl << "Posiblemente ano bisiesto." << endl;
        cout << endl << dia << "/" << mes << " es valida en bisiesto." << endl << endl;
        return;
    }
    else if (dia < 1 || dia > diasMes[mes - 1]) {
       cout << endl << dia << "/" << mes << " Es una fecha invalida." << endl << endl;
       return;
    }

   cout << endl << dia << "/" << mes << " Es una fecha valida." << endl << endl;
}


void Problema_5()
{
    cout << "*** PROBLEMA 5 ***" << endl;

}


void Problema_7()
{
    cout << "*** PROBLEMA 7 ***" << endl;

}


void Problema_9()
{
    int N=0;
    int suma=0;

    cout << "*** PROBLEMA 9 ***" << endl << endl;

    cout << "Ingrese un numero entero: ";
    cin >> N;

    while (N > 0) {
        int digito = N % 10;
        int resultado = 1;

        for (int i = 0; i < digito; i++) {
            resultado *= digito;
        }

        suma += resultado;
        N /= 10;
     }

    cout << endl << "El resultado de la suma es: " << suma << endl << endl;

}


void Problema_11()
{
    cout << "*** PROBLEMA 11 ***" << endl;

}


void Problema_13()
{
    cout << "*** PROBLEMA 13 ***" << endl;

}


void Problema_15()
{
    cout << "*** PROBLEMA 15 ***" << endl;

}


void Problema_17()
    {
        cout << "*** PROBLEMA 17 ***" << endl;

    }

