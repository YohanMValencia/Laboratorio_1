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
    Problema_11();

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
    int n;

    cout << "*** PROBLEMA 5 ***" << endl << endl;

    cout << "Ingrese un numero entero impar: ";
    cin >> n;

    cout << endl;

    if (n % 2 == 0) {
    cout << endl << "El numero debe ser impar." << endl << endl;
    return;
    }

    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i)/2 ; ++j) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
            cout << endl;
    }

    for (int i = n -2; i >= 1; i -=2){
        for (int j = 0; j < (n - i)/2 ; ++j) {
            cout << " ";
        }
        for (int j = 0; j < i; ++j) {
        cout << "*";
        }
        cout << endl;
    }

    cout << endl;
}


void Problema_7()
{
    cout << "*** PROBLEMA 7 ***" << endl << endl;

    int n, suma = 0;
    int a = 1, b = 1;


    cout << "Ingrese un numero entero : ";
    cin >> n;
    cout << endl;

    cout << "La serie Fibonacci hasta " << n << ": " << endl;
    cout << a << " ";
    cout << b << " ";

    for (int c = a + b; c <=  n;  c = a + b){
        if (c % 2 == 0){
            suma += c;
        }
        a = b;
        b = c;
        cout << c << " ";
       }
        cout << endl << endl << "El resultado de la suma es: " << suma << endl << endl;
}


void Problema_9()
{
    int N;
    int suma=0;

    cout << "*** PROBLEMA 9 ***" << endl << endl;

    cout << "Ingrese un numero entero: ";
    cin >> N;

    if (N <= 0){
        cout << endl << "Ingrese un numero Mayor que 0" << endl << endl;
        return;
    }


    for (int num = N; num > 0; num /= 10) {
        int digito = num % 10;
        int temp = digito;
        for (int i = 1; i < digito; ++i) {
            temp *= digito;
        }
        suma += temp;
    }
    cout << endl << "El resultado de la suma es: " << suma << endl << endl;
}


void Problema_11()
{
    cout << "*** PROBLEMA 11 ***" << endl;

    int N;

    cout << "Ingrese un numero entero: ";
    cin >> N;

    if (N <= 0){
        cout << endl << "Ingrese un numero Mayor que 0" << endl << endl;
        return;
    }

    for (int num = 2; num <= N; ++num) {
        for (; N % num == 0; N /= num) {
            cout << num << " ";  // Imprimir el factor primo
                }
            }

            cout << endl;
        }

//    cout << endl << "El resultado de la suma es: " << MCM << endl << endl;



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
