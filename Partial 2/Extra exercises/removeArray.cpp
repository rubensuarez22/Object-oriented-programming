#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <time.h>
// Write a c++ program to remove a specific element from an array.
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
void removeElement(Vector a)
{
  int pos,i,nn;
  do
  {
    cout<<"Which position do you want to remove? ";
    cin>>pos;
  }while((pos<1)||(pos>a.n));
  nn=pos+1;
  for(i=nn;i<=a.n;i++)
  {
    a.x[pos]=a.x[i];
    pos=pos+1;
  }
  a.n=a.n-1;
  cout<<"The resulting array is:"<<endl;
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
  removeElement(a);
  return 0;
} 