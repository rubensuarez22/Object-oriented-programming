#include <iostream>
using namespace std;

int main()
{
    int n,suma=0;
    
do{
    cout << "digite un numero mayor a 1 = " <<endl;
    cin >>n;
}while(n<=1);
for (int i = 1; i<=n; i++){
    suma+=i;
    if (i == n){
    cout<<i;
    }else{
        cout<<i<<" + ";
    }
}
cout<<" = "<<suma<<endl;
return 0;
}