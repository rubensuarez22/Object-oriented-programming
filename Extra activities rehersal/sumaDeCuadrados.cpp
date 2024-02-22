#include <iostream>
using namespace std;
int main()
{
    int cuadrado, suma;
    cout << "aqui te van la suma de los cuadrados del 1 al 10"<<endl;
    for (int i=1; i<=10; i++)
    {
        
    
        cuadrado=i*i;
        cout<<" Numero ="<<i<<", Cuadrado "<<cuadrado<< endl;
        suma=suma+cuadrado;
        cout<<" Suma = "<<suma << endl;
    }
    return 0;
}