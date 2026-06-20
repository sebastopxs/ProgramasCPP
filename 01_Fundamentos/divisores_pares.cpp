#include <iostream>
using namespace std;
int main()
{
	int numero; 
	int ContPar = 0;
    int divis;
	cout<<"Ingresa un numero: "<<endl;
	cin>>numero;

	cout<<"Divisores pares de: "<< numero <<endl;
	for (int i = 1 ; i <= numero; i++) {

		if (numero % i == 0) {
		    
			if (i % 2 == 0) {
				cout<< i <<" ";
				ContPar++;
			}
		}

	}
	if (ContPar == 0) {
		cout << "El numero no posee divisores pares :(";
	}
	return 0;
}
