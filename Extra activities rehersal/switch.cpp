#include <iostream>
using namespace std;

int main(){
    int numero;
    cout<<"Ingresa un numero 1-5, 6 para salir..."<<endl;cin >> numero;
    switch (numero)
    {
    case 1:
        cout<<"Ingresaste 1\n";
        break;
    case 2:
        cout<<"Ingresaste 2\n";
        break;
    case 3:
        cout<<"Ingresaste 3\n";
        break;
    case 4:
        cout<<"Ingresaste 4\n";
        break;
    case 5:
        cout<<"Ingresaste 5\n";
        break;
    case 6:
        cout<<"Salida";
        break;
    
    default:
        cout<<"entre 1 y 6 pls";
        break;
    }
}