#include <iostream>
using namespace std;

void intercambio(int *x, int *y) {
int inter;
    inter = *x;
    *x = *y;
    *y = inter;
}

int main() {
    int a, b;
    int resta;
        cout << "Introduce la variable a: "<<endl;
        cin>> a;
        cout << "Introduce la variable b: "<<endl;
        cin>> b;
    resta = a - b;
    
        cout << "Antes: a = " << a << " b = " << b << "\n";
        cout << "Resta: " << resta <<endl;
        
    intercambio(&a, &b);
    resta = a - b;
    
        cout << "Despues: a = " << a << " b = " << b << "\n";
        cout << "Resta: " <<resta <<endl;
    return 0;
}
