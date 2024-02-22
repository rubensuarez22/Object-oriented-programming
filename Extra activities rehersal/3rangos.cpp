#include <iostream>
using namespace std;

int main()

{
    int sumnum,almacenador;

        do
        {
            cout << "digita el numero ";
            cin >> sumnum;
            almacenador+=sumnum;
            cout << almacenador << endl;
        } while ( (sumnum<100) || (sumnum>200) && (sumnum != 0));
        
    
    return 0;
}