#include "iostream"
#include "string"
using namespace std;
int main (){
    int  opc1;
    cout<<"1 opcion: suma de los elementos de un array de enteros de 10 posiciones"<<endl;
    cout<<"2 opcion: el numero mayor en un array de enteros de 6 posiciones"<<endl;
    cout<<"3 opcion: el orden de los elementos en un array de enteros de 8 posicione"<<endl;
    cout<<"4 opcion: la suma de todos los numeros de un array de enteros de 10 posiciones"<<endl;
    cout<<"5 opcion: el numero de veces que aparece cada fruta "<<endl;

    cout<<"escriba la opcion desea ejecutar:"<<endl;
    cin>>opc1;

    switch (opc1) {
        case 1: {
            int array[10] = {40, 80, 120, 140, 180, 220, 240, 280, 290, 300};
            int n = 0;

            for (int i = 0; i < 10; i++) {
                n = n + array[i];
            }
            cout << "La suma de las variables del array es: " << n << endl;
        }break;


        case 2: {
            int array[6] = {40, 80, 120, 140, 180, 220};
            int m = array[0];

            for (int i = 1; i < 6; i++) {

                if (array[i] > m) {
                    m = array[i];
                }
            }

            cout << "El numero mayor es: " << m << endl;
        }break;

        case 3: {
            int array[8] = {40, 80, 120, 140, 180, 220, 240, 280};

            cout << "Array de manera original: " << endl;
            for (int i = 0; i < 8; i++) {
                cout << array[i] << " ";
            }cout <<""<< endl;

            for (int i = 0; i < 4; i++) {

                int fi = array[i];
                array[i] = array[7 - i];
                array[7 - i] = fi;
            }
            cout << "Array forma invertido: " << endl;
            for (int i = 0; i < 8; i++) {
                cout << array[i] << " ";
            }cout << endl;
        }break;

        case 4:
        {
            int array[10] = {40, 80, 120, 140, 180, 220, 240, 280, 290, 300};
            int let = 0;

            for (int i = 0; i < 10; i++) {
                let += array[i];
            }
            cout << "La suma de todos los numeros del array es: " << let << endl;
        }break;

        case 5: {
            string frutas[9] = {"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};
            string distintas[9];
            int contenido[9];
            int n = 0;

            for (int i = 0; i < 9; i++) {
                string fru = frutas[i];
                int total = -1;

                for (int l = 0; l < n; l++) {
                    if (fru == distintas[l]) {
                        total = l;
                        break;
                    }
                }
                if (total == -1) {
                    distintas[n] = fru;
                    contenido[n] = 1;
                    n++;
                } else {
                    contenido[total]++;
                }
            }

            cout << "El numero de veces que se repite cada fruta es: " << endl;
            for (int i = 0; i < n; i++) {
                cout << distintas[i] << ": " << contenido[i] << endl;
            }
        }
            break;





        default: cout<<"error de opcion seleccionada";

    }

}