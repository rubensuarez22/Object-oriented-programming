#include <iostream>
using namespace std;

int main(){
    int arreglo[100], tamano, mayor=0;

    do{
        cout << "numero no mayor a 100";
        cin >> tamano;
    }while ((tamano<1) || (tamano>100));

    for (int i=0; i< tamano; i++){
        cout <<"Ingresa el valor del elemento "<< i+1<<": ";
        cin >>arreglo[i];
    }
    for (int i=0; i< tamano; i++) {

        if(arreglo[i]>mayor){
            mayor=arreglo[i];  
        }
    }

    cout << "el numero mayor es "<<mayor;

    system ("pause");

}