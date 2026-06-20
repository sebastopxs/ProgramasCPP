#include <iostream>
using namespace std;

int buscar(int x, int k) {

    if (k <= 0 || x < 0) {
        return -1; 
    }
    
    for (int i = 0; i < k - 1; i++) {
        x = x / 10;
    }
    
    return x % 10; 
}

int main() {
    int numero, posicion, digito;
    
    cout << "Ingrese el numero: ";
    cin >> numero;
    
    cout << "Ingrese la posicion que desea buscar: ";
    cin >> posicion;
    
    digito = buscar(numero, posicion);
    
    if (digito < 0) {
        cout << "Error: Posicion o numero no validos.\n";
    } else {
        cout << "El digito encontrado es: " << digito << "\n";
    }
    
    return 0;
}
