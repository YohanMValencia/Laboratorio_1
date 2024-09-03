#include <iostream>
#include <string>
using namespace std;

int problema_1();
int problema_2();
int problema_3();
int problema_4();
int problema_5();
int problema_6();
int problema_7();
int problema_8();
int problema_9();
int problema_10();
int problema_11();
int problema_12();
int problema_13();
int problema_14();
int problema_15();
int problema_16();
int problema_17();


int main() {
    cout << "----------------------------------------\n";
    cout << "|       L A B O R A T O R I O   1       |\n";
    cout << "----------------------------------------\n";
    cout << "| 1. Problema 1                         |\n";
    cout << "| 2. Problema 2                         |\n";
    cout << "| 3. Problema 3                         |\n";
    cout << "| 4. Problema 4                         |\n";
    cout << "| 5. Problema 5                         |\n";
    cout << "| 6. Problema 6                         |\n";
    cout << "| 7. Problema 7                         |\n";
    cout << "| 8. Problema 8                         |\n";
    cout << "| 9. Problema 9                         |\n";
    cout << "|10. Problema 10                        |\n";
    cout << "|11. Problema 11                        |\n";
    cout << "|12. Problema 12                        |\n";
    cout << "|13. Problema 13                        |\n";
    cout << "|14. Problema 14                        |\n";
    cout << "|15. Problema 15                        |\n";
    cout << "|16. Problema 16                        |\n";
    cout << "|17. Problema 14                        |\n";
    cout << "|0. Salir                               |\n";
    cout << "----------------------------------------\n";


    int opcion;
    do {
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        switch(opcion) {
            case 1:
                cout << "Ejecutando Problema 1...\n";
                problema_1();
                cout <<'\n';
                break;
            case 2:
                cout << "Ejecutando Problema 2...\n";
                problema_2();
                cout <<'\n';
                break;
            case 3:
                cout << "Ejecutando Problema 3...\n";
                problema_3();
                cout <<'\n';
                break;
            case 4:
                cout << "Ejecutando Problema 4...\n";
                problema_4();
                cout <<'\n';
                break;
            case 5:
                cout << "Ejecutando Problema 5...\n";
                problema_5();
                cout <<'\n';
                break;
            case 6:
                cout << "Ejecutando Problema 6...\n";
                problema_6();
                cout <<'\n';
                break;
            case 7:
                cout << "Ejecutando Problema 7...\n";
                problema_7();
                cout <<'\n';
                break;
            case 8:
                cout << "Ejecutando Problema 8...\n";
                problema_8();
                cout <<'\n';
                break;
            case 9:
                cout << "Ejecutando Problema 9...\n";
                problema_9();
                cout <<'\n';
                break;
            case 10:
                cout << "Ejecutando Problema 10...\n";
                problema_10();
                cout <<'\n';
                break;
            case 11:
                cout << "Ejecutando Problema 11...\n";
                problema_11();
                cout <<'\n';
                break;
            case 12:
                cout << "Ejecutando Problema 12...\n";
                problema_12();
                cout <<'\n';
                break;
            case 13:
                cout << "Ejecutando Problema 13...\n";
                problema_13();
                cout <<'\n';
                break;
            case 14:
                cout << "Ejecutando Problema 14...\n";
                problema_14();
                cout <<'\n';
                break;
            case 15:
                cout << "Ejecutando Problema 15...\n";
                problema_15();
                cout <<'\n';
                break;
            case 16:
                cout << "Ejecutando Problema 16...\n";
                problema_16();
                cout <<'\n';
                break;
            case 17:
                cout << "Ejecutando Problema 17...\n";
                problema_17();
                cout <<'\n';
                break;
            case 0:
                cout << "Saliendo...\n";
                cout <<'\n';
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }
    } while(opcion != 0);
    return 0;
}

int problema_1(){
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
    return 0;
}

int problema_2() {
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


    } while (valor != 0);
    cout << "fin del programa..."<< '\n';
    return 0;
}

int problema_3(){
    int mes, dia;

    cout << "*** PROBLEMA 3 ***" << endl << endl;

    cout << "Ingrese el mes (1-12): ";
    cin >> mes;

    if (mes < 1 || mes > 12) {
        cout << endl << mes << " es un mes invalido." << endl << endl;
        return 1;
    }

    cout << endl << "Ingrese el dia: ";
    cin >> dia;

    int diasMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && dia == 29) {
        cout << endl << "Posiblemente ano bisiesto." << endl;
        cout << endl << dia << "/" << mes << " es valida en bisiesto." << endl << endl;
        return 1;
    }
    else if (dia < 1 || dia > diasMes[mes - 1]) {
       cout << endl << dia << "/" << mes << " Es una fecha invalida." << endl << endl;
       return 1;
    }

   cout << endl << dia << "/" << mes << " Es una fecha valida." << endl << endl;
   return 0;
}

int problema_4(){
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



    return 0;
}

int problema_5(){
    int n;

    cout << "*** PROBLEMA 5 ***" << endl << endl;

    cout << "Ingrese un numero entero impar: ";
    cin >> n;

    cout << endl;

    if (n % 2 == 0) {
    cout << endl << "El numero debe ser impar." << endl << endl;
    return 1;
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
    return 0;
}

int problema_6() {
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

    return 0;
}

int problema_7(){
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
        return 0;
}

int problema_8() {
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

    return 0;
}

int problema_9(){
    int N;
    int suma=0;

    cout << "*** PROBLEMA 9 ***" << endl << endl;

    cout << "Ingrese un numero entero: ";
    cin >> N;

    if (N <= 0){
        cout << endl << "Ingrese un numero Mayor que 0" << endl << endl;
        return 1;
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
    return 0;
}

int problema_10(){
    cout <<"**** pregunta 10, el n-nesimo numero primo ****"<<'\n';
    int n = 0;

    int primos[100] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,  //un arreglo con los primeros 100 numeros primos
    53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131,
    137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211,
    223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293,
    307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389,
    397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479,
    487, 491, 499, 503, 509, 521, 523, 541};

    cout << "ingrese el numero 0 o letra para salir \n";
    do{

    cout <<"cual de los primeros 100 numeros primos deseas conocer: ";
    cin >> n;
    if(n==0){ // se utiliza el cero para salir del programa
        cout << "programa terminado"<<'\n';
        break;
    }

    while(0 > n){ //se utiliza para evitar el ingreso de numeros negativos
        cout << "numero mal ingresado, vuelva a ingresar la posicion que desea conocer: "<<'\n';
        cin >> n;
    }

    while(n > 100){
        cout << "numero fuera del rango, vuelva a ingresar la posicion que desea conocer: ";
        cin >> n;
    }
    cout << "el "<<n<< " numero primo es: "<< primos[n-1]<<'\n';
    cout<<'\n';

    }while(true);


    return 0;
}

int problema_11(){
    cout << "*** PROBLEMA 11 ***" << endl << endl;

    int N;
    int MCM =1;

    cout << "Ingrese un numero entero: ";
    cin >> N;

    if (N <= 0){
        cout << endl << "Ingrese un numero Mayor que 0" << endl << endl;
        return 1;
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
    return 0;
}

int problema_12(){
    cout << "**** pregunta 12, mayor factor primo ****"<<'\n';
    cout << "ingrese 0 o una letra para salir del programa "<<'\n';
    do{

    int n = 0, A =0;
    int primo[100] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,  //un arreglo con los primeros 100 numeros primos
    53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131,
    137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211,
    223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293,
    307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389,
    397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479,
    487, 491, 499, 503, 509, 521, 523, 541};
    cout << "ingrese un numero N: ";
    cin >> n;

    if(n == 0){
        cout << "fin del programa"<<'\n';
        break;
        }

    for(int i =0; n >= primo[i] && i <100 ; i++){  //el ciclo se ejecutara mientras el dato ingresado sea mayor a la pocision del numero primo actual
        if(n%primo[i] == 0){  // si el numero ingresado es divisible por el numero primo. A sera el valor actual de primo
            A = primo[i]; //A siempre sera el numero mas grande "encontrado"

        }

    }
    cout << "el maximo factor primo de "<< n<< " es: "<<A<<'\n';

    }while(true);

    return 0;
}

int problema_13(){
    cout << "*** PROBLEMA 13 ***" << endl;

    int N;
    int suma = 0;

    cout << endl << "Ingrese un numero entero: ";
    cin >> N;

    if (N < 2){
        cout << endl << "No hay primos menores que 2" << endl << endl;
        return 1;
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
    return 0;
}

int problema_14(){
    cout<< "**** pregunta 14, el producto es un palindromo? ****"<<'\n';
    cout<<"ingrese el valor de 0 o letra para salir del programa"<<'\n';
    do{
    int A, B; //datos ingresados
    int C; //resultado del producto ingresado
    int D, E, F, G, H, I, J, K; //variables de descompocision del producto con 5 cifras
    int d, e, f, g, h, i, j ,k , l, m; // variables de desconcicion del producto con 6 cifras

    int cifra_5[5];
    int cifra_6[6];

    cout << "ingrese un primero numero A: ";
    cin >> A;
    if(A==0){
        cout << "fin del programa."<<'\n';
        break;
    }

    while(0 >A or A >= 1000 or A <100){
        cout<< "dato mal ingresado"<<'\n';
        cout << "ingrese un primero numero A: ";
        cin >> A;
    }

    cout << "ingrese un segundo numero B: ";
    cin >> B;
    while(0 >B or B >= 1000 or B <100){
        cout<< "dato mal ingresado"<<'\n';
        cout << "ingrese un primero numero B: ";
        cin >> B;
    }

    if(B==0){
        cout << "fin del programa."<<'\n';
        break;
    }

    C = A*B;
    //se decompone el producto de 5 cifras
    if(C>=10000 && C<= 99999){
        D = C/10000; //primer digito
        E = C - (D*10000);
        cifra_5[0] = D;

        F = E/1000; //segundo digito
        G = E - (F*1000);
        cifra_5[1] = F;

        H = G/100; //tercer digito
        I = G - (H*100);
        cifra_5[2] = H;

        J = I/10; //cuarto digito
        K = I - (J*10); // quinto digito
        cifra_5[3] = J;
        cifra_5[4] = K;

        while(true){ //los while verifican que el numero si sea una palabra palindroma
            if(cifra_5[0] == cifra_5[4]){
                if(cifra_5[1] == cifra_5[3]){
                    if(cifra_5[2] == cifra_5[2]){
                        cout<<C<< ": es un numero palindromo ."<<'\n';
                        break;
            }
        }
    }
            else{
                cout<<C<<": no es un numero palindromo."<< '\n';
                break;
    }
    }

    }




    if(C>=100000 && C<= 999999){
        d = C/100000; // primer digito
        e = C- (d*100000);
        cifra_6[0] = d;

        f = e/10000; //segunda cifra
        g = e - (f*10000);
        cifra_6[1] = f;

        h = g/1000; //tercera cifra
        i = g - (h*1000);
        cifra_6[2] = h;

        j = i/100; //cuarta cifra
        k = i - (j*100);
        cifra_6[3] = j;

        l = k/10; // quinta cifra
        m = k - (l*10); //sexta cifra
        cifra_6[4] = l;
        cifra_6[5] = m;

        while(true){ // el while verifica que si sea una palabra palindroma
            if(cifra_6[0] == cifra_6[5]){
                if(cifra_6[1] == cifra_6[4]){
                if(cifra_6[2] == cifra_6[3]){
                    cout <<C<<": es un numero palindromo"<<'\n';
                    break;
            }
        }
    }
            else {
                cout <<C<< ": no es un numero palindromo"<<'\n';
                break;
    }
    }

    }



    }while(true);


    return 0;
}

int problema_15(){
    cout << "*** PROBLEMA 15 ***" << endl;

    int n;
    cout << endl <<  "Ingrese un numero entero impar: ";
    cin >> n;

    if (n % 2 == 0 || n <= 0){
        cout << endl << "Por favor ingrese un numero impar valido." << endl << endl;
        return 1;
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
    return 0;
}

int problema_16() {
    cout << "**** problema 16, serie de collatz ****" <<'\n';
    cout << "ingrese 0 o letra para salir: "<<'\n';
    do{
    int k = 0, j = 0, i = 0;
    int A = 0, B=0;
    int a = 2;
    //se encargan de saber cual es la semilla con el mayor numero de elemntos
    int cont = 0;
    int maxElementos = 0;
    int semillaMax = 0;

    cout << "Ingrese un valor inicial K: "; //se determina un array con todas las posibles semillas
    cin >> k;
    if(k ==0){
        cout<< "fin del programa."<<'\n';
        break;
    }

    while(2 >= k  ){
        cout << "numero mal ingresado, vuelva a ingresar: ";
        cin >> k;
    }

    int lista[k];

    while (k > j) { //se generan todas las semillas y se guardan en en el array
        lista[i] = j + 1;
        j++;
        i++;
    }
    //cout << '\n';

    while (true) { //se generan todas las series de collatz
        A = lista[k - a];
        if (A == 1) {
            //cout << '\n';
            break;
        }

        //cout << "La serie con la semilla " << A << " es: ";
        cont = 0;

        while (true) {
            //cout << A << " ";
            cont++;
            if (A == 1) {
                //cout << '\n';
                break;
            }

            if (A % 2 == 0) {
                A = A / 2;
            } else {
                A = 3 * A + 1;
            }
        }

        if (cont > maxElementos) { //se verifica cual es la seria mas grande
            maxElementos = cont;
            semillaMax = lista[k - a];
        }

        a++;
    }

    cout << "La semilla con mas elementos es: " << semillaMax << " con " << maxElementos << " elementos." << endl;

    B = semillaMax;
    cout << "la serie con la semilla "<< B <<" es :"<< B <<" "; //al saber la mas grande se muestra en pantalla
    while(true){
        if(B == 1){
            cout <<'\n';
            break;
        }
        if(B%2 == 0){
            B = B/2;
            cout<< B<< " ";
        }
        else{
            B = 3*B +1;
            cout << B << " ";
        }
    }


    }while(true);



    return 0;
}

int problema_17(){
    int k;

    cout << "Ingrese un numero entero positivo: ";
    cin >> k;

    int triangular = 0;  // Almacena el número triangular actual
    int n = 1;  // Índice para generar números triangulares
    int encontrado = 0;  // Bandera para saber si se encontró el número triangular

    for (n = 1; encontrado == 0; ++n){
        triangular += n;  // Generar el enésimo número triangular sumando n

        int cantidadDivisores = 0;
        int ultimoDivisor = 1;

        // Contar y almacenar los divisores
        for (int i = 1; i <= triangular; ++i){
            if (triangular % i == 0){
                cantidadDivisores++;
                ultimoDivisor = i;  // Almacenar el último divisor
            }
        }

        if (cantidadDivisores > k){
            cout << endl << "El numero es: " << triangular << " que tiene " << cantidadDivisores << " divisores." << endl << endl;
            cout << "Divisores de " << triangular << " son: ";

            // Volver a contar y imprimir los divisores para el último número triangular
            for (int i = 1; i <= triangular; ++i) {
                if (triangular % i == 0) {
                    cout << i << " ";
                }
            }
            cout << endl << endl;
            encontrado = 1;  // Marcamos que hemos encontrado el número
        }
    }
    return 0;
}

