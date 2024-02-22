#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
class Numero
{
  public:
  int n;
  int x[101]={0};
  int origin;
  int i;
  void readN()
  {
      cout<<"Write the number"<<endl;
      cin>>n;
      origin=n;
  }
  void separateN()
  {
    int i=1;
    do
    {
        x[i]=x[i]+n%10;
        n=n/10;
        i=i+1;
        x[0]=x[0]+1;
    }while(n!=0);
  }
    
  
  
};

   void checadorAmstrong(Numero a)
   {
    int i,j;
    int num=0;
    for(int j=1; j<=a.x[i]; j++){
      num=num+pow(a.x[j],a.x[0]);
    }
    
     if (a.origin != num)
     {
         cout<<"It is NOT an Armstrong number";
     }else
     {
         cout<<"It is an Armstrong number";
     }
   }


int main() 
{
  Numero a;
  a.readN();
  a.separateN();
  checadorAmstrong(a);
  
 return 0;
} 
