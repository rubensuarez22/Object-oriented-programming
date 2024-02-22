#include <iostream>
using namespace std;

int main(){
    int numeroIngresado, numeroAEncontrar=5;
    cout<<"Ingresa el numero que quiero"<<endl;
    cin>>numeroIngresado;

    if(numeroIngresado==numeroAEncontrar)
    {
        cout<<"congrats"<<endl;
    }
    else{
        cout<<"try again"<<endl;
    }

    system ("pause");
    return 0;
}