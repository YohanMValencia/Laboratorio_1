#include <iostream>

using namespace std;

int Ejercicio_04() {

    int hora_1,hora_2, nuevahora, minutos;

        cout << "Favor ingrese un  numero: ";
        cin >> hora_1;

        int horainicial = hora_1 / 100;
        int minutosinicial = hora_1 % 100;

        if (horainicial <= 0 || horainicial > 23 || minutosinicial < 0 || minutosinicial > 59){
            cout <<"Invalido: " << hora_1 << " es un tiempo invalido." << endl;
            return 1;
         }

        cout << "Favor ingrese un  segundo numero: ";
        cin >> hora_2;

        int horaduracion = hora_2 / 100;
        int minutosduracion = hora_2 % 100;

       if (horaduracion <= 0 || horaduracion > 23 || minutosduracion < 0 || minutosduracion > 59) {
            cout << "Invalido: " <<  hora_2 << " es un tiempo invalido." << endl;
            return 1;
        }
       nuevahora = horainicial + horaduracion;
       minutos = minutosinicial + minutosinicial;

       if (minutos >= 60) {
           nuevahora += 1;
           minutos -= 60;
            }

       if (nuevahora >= 24) {
           nuevahora -= 24;
           }

       cout << "La hora es ";
           if (nuevahora < 10) {
              cout << "0"; // Añadir un cero delante si la hora es de un solo dígito
           }

       cout << nuevahora;
           if (minutos < 10) {
              cout << "0"; // Añadir un cero delante si los minutos son de un solo dígito
           }
           cout << minutos << "." << endl;

           return 0;
       }
