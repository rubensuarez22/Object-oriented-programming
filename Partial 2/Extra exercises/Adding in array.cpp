#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
class Vector
{
 public:
 int n;
 float x[101]={0};
 void readn()
 {
   do
   {
     cout<<"How many values? ";
     cin>>n;
   }while((n<1)||(n>100));
 }
 void readvalues()
 {
   int i;
   srand(time(NULL));
   for(i=1;i<=n;i++)
   {
     x[i]=rand()%100+1; 
   }
 }
 void print()
 {
   int i;
   printf("\e[1;1H\e[2J");
   cout<<"The values inside the vector are:"<<endl;
   for(i=1;i<=n;i++)
   {
     cout<<"["<<i<<"]= "<<x[i]<<endl;
   }
 }
};
void insertElement(Vector a)
{
  int pos,newValue,i,nn;
  nn=a.n+1;
  do
  {
    cout<<"Into which position do you want to insert a different number? ";
    cin>>pos;
  }while((pos<1)||(pos>a.n));
  cout<<"Write the new number for the array "<<"["<<pos<<"]: ";
  cin>>newValue;
  for(i=a.n;i>=pos;i--)
  {
    a.x[nn]=a.x[i];
    nn=nn-1;
  }
  a.n=a.n+1;
  a.x[pos]=newValue;
  for(i=1;i<=a.n;i++)
  {
    cout<<"["<<i<<"]"<<"="<<a.x[i]<<endl;
  } 
};
int main() 
{
  Vector a;
  a.readn();
  a.readvalues();
  a.print();
  insertElement(a);
  return 0;
} 