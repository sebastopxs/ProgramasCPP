#include <iostream>
using namespace std;
int main()
{
    float producto, precio, venta;
    do {
        cout<<"Ingrese el PRECIO del producto: "<<endl;
		cin>>precio;
		if (precio == 0) break;
	    if (precio < 0) {
	        cout<<"Este PRECIO no es valido >:("<<endl;
	    continue;
	    } 
    
    do {
        cout<<"Ingrese la CANTIDAD de producto que desea comprar: "<<endl;
		cin>>producto;
		if (producto < 0) {
		    cout <<"Esta CANTIDAD no es valida"<<endl;
		}
    } while (producto < 0);
    
    venta = producto * precio;
    cout<<"La venta total es: "<< venta << endl;
} while (precio != 0);
    cout<<"Gracias por usar el programa :)"<<endl;
    return 0;
}
