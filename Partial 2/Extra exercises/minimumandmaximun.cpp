#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <time.h>
// Write a C++ program to find the maximum and minimum value of an array.    
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
void selectionsort(Vector &a)
{
  int i,j,min;
  float temp;
  for(i=1;i<=a.n-1;i++)
  {
    min=i;
    for(j=i+1;j<=a.n;j++)
    {
      if(a.x[j]<a.x[min])
      {
        min=j;
      }
      if(i!=min)
      {
        temp=a.x[i];
        a.x[i]=a.x[min];
        a.x[min]=temp;
        min=i;
      }  
    }
  }
  cout<<"The minimum is "<<a.x[1]<<" and the maximum is "<<a.x[a.n]<<endl;
}
int main() 
{
  Vector a;
  a.readn();
  a.readvalues();
  a.print();
  selectionsort(a);
  return 0;
}