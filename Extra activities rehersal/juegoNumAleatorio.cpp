#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(NULL));

    int aleatorio= 1+(rand()%100), num, contador;
    cout <<"Encuentra el numero "<<aleatorio<<endl;

    do
    {
        cin>>num;
        if (num!=aleatorio && num>aleatorio)
        {
        contador++;
        cout <<"Fallaste! llevas "<<contador<<" intentos y el numero es menor."<<endl;
        }else{
        contador++;
        cout <<"Fallaste! llevas "<<contador<<" intentos y el numero es mayor."<<endl;
        }
    } while (num!=aleatorio);

    cout<<"Felicidades! lo lograste al intento numero "<<contador;

}