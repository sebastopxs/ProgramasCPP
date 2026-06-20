#include <iostream>
using namespace std;
int main()
{
    float num;
    float suma=0;
    float num2;
    float pro;
    do {
        cout<<"Cuantos numeros desea sumar: (De 10-20)"<<endl;
        cin>>num;
        if (num < 10 || num >20) {
        cout<<"Fuera de rango"<<endl;
            
        }
    } while (num < 10 || num >20);
    
    cout<<"Ahora ingrese los "<<num<<":"<<endl;
    for (int i = 1 ; i <= num; i++) {
        cout<<"Ingrese su valor: "<< i <<":";
        cin>>num2;
        suma += num2;
    }
    pro = suma/num;
    cout<<"\n\nLa suma total es: "<< suma <<endl;
    cout<<"\n\nEl promedio es: "<< pro <<endl;

    return 0;
}
