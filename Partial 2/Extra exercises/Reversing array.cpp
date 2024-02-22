#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <time.h>
// Write a  c++   program to reverse an array of integer values
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
void reversedArray(Vector a)
{
 int i,j;
 int b[101]={0}; 
 cout<<"The reversed array is:"<<endl;
 i=1;
 for(j=a.n;j>0;j--)
 {
   b[i]=a.x[j];
   cout<<"["<<i<<"]"<<"="<<b[i]<<endl;
   i=i+1;
  }
}
int main() 
{
  Vector a;
  a.readn();
  a.readvalues();
  a.print();
  reversedArray(a);
  return 0;
} 