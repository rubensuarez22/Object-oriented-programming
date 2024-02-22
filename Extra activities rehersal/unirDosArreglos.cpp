#include <iostream>
using namespace std;
int main(){


    int arreglo1[5], arreglo2[5], arreglo3[10];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingresa en el arreglo 1 el valor "<<i+1<<": ";
        cin>>arreglo1[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingresa en el arreglo 2 el valor "<<i+1<<": ";
        cin>>arreglo2[i];

    }
    for (int i = 0; i < 10; i++)
    {
        if (i<5){
            arreglo3[i] = arreglo1[i];
        }
        if (i>=5){
            arreglo3[i] = arreglo2[i-5];
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout<<arreglo3[i]<<endl;
    }

    system ("pause");
    return 0;
}