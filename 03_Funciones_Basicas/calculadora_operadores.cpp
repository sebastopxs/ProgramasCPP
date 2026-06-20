#include <iostream>
using namespace std;

int suma(int x, int y) {
    int r;
    r = x + y;
    return r; 
}
int resta(int x, int y) {
    int r;
    r = x - y;
    return r; 
}
int multiplicacion(int x, int y) {
    int r;
    r = x * y;
    return r; 
}
int division(int x, int y) {
    
    if  (y==0) {
    cout<<"No se puede dividir entre 0"<<endl;
    return 0;
    }
    int r;
    r = x / y;
    return r; 
}

int main() {
    int a, b, opcion;

    cout << "1. Sumar" << endl;
    cout << "2. Restar" << endl;
    cout << "3. Multiplicar" << endl;
    cout << "4. Dividir" << endl;
    cout << "Seleccione una opcion (1-4): ";
    cin >> opcion;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    switch (opcion) {
        case 1:
            cout << "Suma = " << suma(a, b) << endl;
            break;
        case 2:
            cout << "Resta = " << resta(a, b) << endl;
            break;
        case 3:
            cout << "Multiplicacion = " << multiplicacion(a, b) << endl;
            break;
        case 4:

            if (b == 0) {
                division(a, b);
            } else {
                cout << "Division = " << division(a, b) << endl;
            }
            break;
            
    }

    return 0;
}
