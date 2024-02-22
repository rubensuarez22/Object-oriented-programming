#include <iostream>
using namespace std;

int main()
{
    int numero, factorial=1;
    do
    {
        cout << "numero mayor a 1\n";
        cin >>numero;
    } while (numero<=1);
  
    for (int i = 1; i<=numero; i++)
    {
       factorial=factorial*i;
       cout<<i<<"*";
    }
    cout<<endl<<factorial<<endl;
    return 0;
}