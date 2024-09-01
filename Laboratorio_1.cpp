#include <iostream>

using namespace std;

void Problema_1();
void Problema_2();
void Problema_3();
void Problema_4();
void Problema_5();
void Problema_6();
void Problema_7();
void Problema_8();
void Problema_9();
void Problema_10();
void Problema_11();
void Problema_12();
void Problema_13();
void Problema_14();
void Problema_15();
void Problema_16();
void Problema_17();


int main()
{
    Problema_15();

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
void Problema_2()
{
    cout << "**** problema 2 descompocicion de valores ****"<<'\n';
        int valor, cons_1, cons_2, cons_3, cons_4, cons_5, cons_6, cons_7, cons_8, cons_9, cons_10;
        int A, B, C, D, E, F, G, H, I, J;
        cout << "Ingrese el valor 0, o una letra para salir del programa" << '\n';

        do {
            cout << "Ingrese un valor para descomponerlo: ";
            cin >> valor;

            // reinicia el valor de las variables para evitar malas impresiones o valores erroneos
            cons_1 = cons_2 = cons_3 = cons_4 = cons_5 = cons_6 = cons_7 = cons_8 = cons_9 = cons_10 = 0;

            // verifica si el numero/valor ingresado si se puede descomponer en los valores dados
            if (valor >= 50000) {
                cons_1 = valor / 50000;
            }
            A = valor - (50000 * cons_1);

            if (A >= 20000) {
                cons_2 = A / 20000;
            }
            B = A - (20000 * cons_2);

            if (B >= 10000) {
                cons_3 = B / 10000;
            }
            C = B - (10000 * cons_3);

            if (C >= 5000) {
                cons_4 = C / 5000;
            }
            D = C - (5000 * cons_4);

            if (D >= 2000) {
                cons_5 = D / 2000;
            }
            E = D - (2000 * cons_5);

            if (E >= 1000) {
                cons_6 = E / 1000;
            }
            F = E - (1000 * cons_6);

            if (F >= 500) {
                cons_7 = F / 500;
            }
            G = F - (500 * cons_7);

            if (G >= 200) {
                cons_8 = G / 200;
            }
            H = G - (200 * cons_8);

            if (H >= 100) {
                cons_9 = H / 100;
            }
            I = H - (100 * cons_9);

            if (I >= 50) {
                cons_10 = I / 50;
            }

            J = I - (50 * cons_10);

            //por ultimo imprime los valores en el cual se puede descomponer el valor ingresado
            cout << "50.000 : " << cons_1 << '\n';
            cout << "20.000: " << cons_2 << '\n';
            cout << "10.000: " << cons_3 << '\n';
            cout << "5000: " << cons_4 << '\n';
            cout << "2000: " << cons_5 << '\n';
            cout << "1000: " << cons_6 << '\n';
            cout << "500: " << cons_7 << '\n';
            cout << "200: " << cons_8 << '\n';
            cout << "100: " << cons_9 << '\n';
            cout << "50: " << cons_10 << '\n';
            cout << "Residuo: " << J << '\n';
            cout << '\n';


        } while (valor != 0);

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
void Problema_4()
{
    cout <<"**** problema 4, suma de horas/minutos ****"<<'\n';
    int hora_1 =0, C=0, D=0; // datos solo utilizados para el manejo y separacion de la primera hora
    int hora_2 = 0, E=0, F=0; // datos solo utilizados para el manejo y separacion de la segunda hora
    int suma_H_1 = 0, suma_H_2=0, H=0, I=0; //datos solo utilizados para la sumas de las horas ingresadas

    cout <<"ingrese 25 para salir"<<'\n';
    do{
    while (true) { //los while se encargan que los datos ingresados si sean los correctos

        cout << "Ingrese la primera hora militar: ";
        cin >> hora_1;
        C = hora_1 / 100; //se divide el numero ingresado para el mejor manejo
        D = hora_1 % 100;

        if (C < 25 && D < 60) { //verifica si al "partir" el numero ingresado cumpla con las condiciones usuales de una hora
            break;
        } else {
            cout << "Hora mal ingresada, vuelva a ingresar la primera hora." << '\n';
        }
    }
        if(hora_1 == 25){//se utiliza para salir del programa
            break;
        }

    while (true) {
        cout << "Ingrese la segunda hora militar: "; //misma estructura anterior, para la segunda hora ingresada
        cin >> hora_2;
        E = hora_2 / 100;
        F = hora_2 % 100;

        if (E <= 24 && F < 60) {
            break;
        } else {
            cout << "Hora mal ingresada, vuelva a ingresar la primera hora." << '\n';
        }
    }

    suma_H_1 = C + E; //se verifican las sumas de las horas y los minutos donde suma_H_1 son las horas y suma_H_2 son los minutos
    suma_H_2 = D + F;

    if (suma_H_2 >= 60) {
        suma_H_2 -= 60;
        suma_H_1 += 1;
    }

    if (suma_H_1 >= 24) {
        suma_H_1 -= 24;
    }

    H = suma_H_1;
    I = suma_H_2;

    cout << "La hora es =  " << H << ":" << (I < 10 ? "0" : "") << I << '\n'; //si el numero queda tipo "xx:1" se le agrega un "0"
                                                                        // para mayor facilidad a la hora de entender el resultado


    }while(true);




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
void Problema_6()
{
    cout << "**** problema 6, aproximacion de euler ****"<<'\n';
    int numero;
    cout << "Ingrese 0 para salir del programa" << '\n';

    do {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero == 0) break; //se utiliza para salir del programa

        double euler = 1.0; //valores iniciales para euler y factorial
        double factor = 1.0;

        for (int i = 1; i <= numero-1; i++) {
            factor *= (1.0 / i); //se calcula el facturial y se le suma a euler
            euler += factor;
        }

        cout << "Euler es aproximadamente: " << euler << '\n'; //se imprime el valor de euler aproximado con la cantidad de iteraciones ingresadas

    } while (numero != 0);


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
void Problema_8()
{
    cout << "**** problema 8, suma de multiplos ****"<<'\n';
    cout <<"ingrese 0 para salir"<<'\n';

    do{
    int A, B, C;
    int suma;

    cout << "Ingrese el numero A: "; // datos pedidos-ingresados
    cin >> A;
    if(A == 0){ //se utiliza el 0 para salir del programa
        cout<<"progrma finalizado"<<'\n';
        break;
    }
    cout << "Ingrese el numero B: ";
    cin >> B;
    if(B == 0){
        cout<<"progrma finalizado"<<'\n';
        break;
    }
    cout << "Ingrese el numero C: ";
    cin >> C;
    if(C == 0){
        cout<<"progrma finalizado"<<'\n';
        break;
    }

    bool signo = true; //se utiliza para la impresion inversa de signos

    for (int i = 1; i * A < C; i++) { //primero verifica si el numero si es un multiplo de A menor que C
        if (!signo) {//invertir el valor booleano
            cout << " + ";
        }
        cout << i * A; // imprime el multiplo de A
        suma = suma + (i*A);
        signo = false;
    }

    for (int i = 1; i * B < C; i++) { //primero verifica si el numero es un multiplo de B menor que C
        if (!signo) {
            cout << " + ";
        }
        cout << i * B; //imprime el numero multiplo de B
        suma = suma + (i*B);
        signo = false;
    }
    cout << " = " << suma<<'\n'; // por ultimo imprime la suma de los multiplos

    //observacion 1: el codigo actualmente no presenta una forma de verificar numeros repetidos con su estructura actual
    /*observacion 2: se estara trabajando/buscando una forma en el cual se puede solucionar la observacion 1,
    sin el uso de librerias
    */



    }while(true);


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
void Problema_10()
{
    cout << "*** PROBLEMA 10 ***" << endl;

}
void Problema_11()
{
    cout << "*** PROBLEMA 11 ***" << endl << endl;

    int N;
    int MCM =1;

    cout << "Ingrese un numero entero: ";
    cin >> N;

    if (N <= 0){
        cout << endl << "Ingrese un numero Mayor que 0" << endl << endl;
        return;
    }
    cout << endl;

    for (int num = 2; num <= N; ++num) {
        cout << "Los factores de " << num << " son: " << " ";
        int temp = num;
        for (int fac = 2; fac <= temp; ++fac) {
            for (; temp % fac == 0; temp /= fac) {
                cout << fac << " ";

                int max_poten = fac;
                for (int poten = fac; poten * fac <= N; poten *= fac){
                    max_poten = poten * fac;
                }
                if (MCM % max_poten != 0){
                    MCM *= max_poten;
                }
            }
        }
        cout << endl;
    }
    cout << endl << "El minimo comun multiplo es: " << MCM << endl;
    cout << endl;
}
void Problema_12()
{
    cout << "*** PROBLEMA 12 ***" << endl;

}
void Problema_13()
{
    cout << "*** PROBLEMA 13 ***" << endl;

    int N;
    int suma = 0;

    cout << endl << "Ingrese un numero entero: ";
    cin >> N;

    if (N < 2){
        cout << endl << "No hay primos menores que 2" << endl << endl;
        return;
    }

    cout << endl << "Los numeros primos menores que " << N << " son: ";

    for (int num = 2; num <= N; ++num) {
        int primo = 1;

        for (int temp = 2; temp * temp <= num; ++temp){
            if (num % temp == 0){
            primo = 0;
            break;
            }
        }
        if (primo == 1) {
            suma += num;
            cout << num << " ";
        }
    }
    cout << endl << endl << "El resultado de la suma es: " << suma << endl << endl;
}
void Problema_14()
{
    cout << "*** PROBLEMA 14 ***" << endl;

}
void Problema_15()
{
    cout << "*** PROBLEMA 15 ***" << endl;

    int n;
    cout << endl <<  "Ingrese un numero entero impar: ";
    cin >> n;

    if (n % 2 == 0 || n <= 0){
        cout << endl << "Por favor ingrese un numero impar valido." << endl << endl;
        return;
    }

    int suma_diagonal = 1;  // Empezamos con el 1 en el centro
    int valor_actual = 1;    // El número en la espiral
    int incremento = 2;      // La distancia entre los números de las diagonales

    // Generar la espiral y sumar los números en las diagonales
    for (int capa = 1; capa <= (n - 1) / 2; ++capa){
        for (int esquina = 1; esquina <= 4; ++esquina){
            valor_actual += incremento;
            suma_diagonal += valor_actual;
        }
        incremento += 2;  // Aumentar la distancia para la siguiente capa
    }

    cout << endl << "En una espiral de " << n << "x" << n << ", la suma es: " << suma_diagonal << endl << endl;

    // Bonificación: Imprimir la espiral (opcional)

    int espiral[n][n];  // Matriz para almacenar la espiral
    int x = n / 2, y = n / 2;  // Comenzamos en el centro de la matriz
    valor_actual = 1;
    espiral[x][y] = valor_actual;

    for (int i = 1; i <= (n - 1) / 2; ++i){

        // Movimiento hacia la derecha
        ++y;
        espiral[x][y] = ++valor_actual;

        // Movimiento hacia abajo
        for (int j = 1; j <= 2 * i - 1; ++j)
            espiral[++x][y] = ++valor_actual;

        // Movimiento hacia la izquierda
        for (int j = 1; j <= 2 * i; ++j)
            espiral[x][--y] = ++valor_actual;

        // Movimiento hacia arriba
        for (int j = 1; j <= 2 * i; ++j)
            espiral[--x][y] = ++valor_actual;

        // Movimiento hacia la derecha
        for (int j = 1; j <= 2 * i; ++j)
            espiral[x][++y] = ++valor_actual;
    }

    // Imprimir la espiral
    cout << "Espiral de " << n << "x" << n << ":" << endl << endl;
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cout << espiral[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
void Problema_16()
{
    cout << "*** PROBLEMA 16 ***" << endl;

}

void Problema_17()
{
    cout << "*** PROBLEMA 17 ***" << endl;

}
