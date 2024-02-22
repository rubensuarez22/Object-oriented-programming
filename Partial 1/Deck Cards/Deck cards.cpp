#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
class Card
{
   public:
   int num;
   int fig;
   void draw()
{
  num = rand()%13+1;
  fig = rand()%4+1;
}//end draw
   void show()
{
   switch(num)
     {
       case 1:
         {
           cout<<" A ";
           break;
         }
       case 11:
         {
           cout<<" J ";
           break;
         }
       case 12:
         {
           cout<<" Q ";
           break;
         }
       case 13:
         {
           cout<<" K ";
           break;
         }
       default:
         {
           printf("%2d ",num);
           break;
         }
     }//endswitch
     switch(fig)
      {
        case 1:
          {
            cout<<"Corazon "<<endl;
            break;
          }
        case 2:
      {
        cout<<" Trebol "<<endl;
        break;
      }
      case 3:
      {
        cout<<" Diamante "<<endl;
        break;
      }
      case 4:
      {
        cout<<" Picas "<<endl;
        break;
      }
   }//endswitch

}//end show
};// end class
i#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
class Card
{
   public:
   int num;
   int fig;
   void draw()
{
  num = rand()%13+1;
  fig = rand()%4+1;
}//end draw
   void show()
{
   switch(num)
     {
       case 1:
         {
           cout<<" A ";
           break;
         }
       case 11:
         {
           cout<<" J ";
           break;
         }
       case 12:
         {
           cout<<" Q ";
           break;
         }
       case 13:
         {
           cout<<" K ";
           break;
         }
       default:
         {
           printf("%2d ",num);
           break;
         }
     }//endswitch
     switch(fig)
      {
        case 1:
          {
            cout<<" ♥ "<<endl;
            break;
          }
        case 2:
      {
        cout<<" ♣ "<<endl;
        break;
      }
      case 3:
      {
        cout<<" ♦"<<endl;
        break;
      }
      case 4:
      {
        cout<<" ♠"<<endl;
        break;
      }
   }//endswitch

}//end show
};// end class
int main() 
{
   srand(time(NULL));
   Card c[5];
   int i;
   for(i=0;i<5;i++)
     {
       c[i].draw();
     }
  for(i=0;i<5;i++)
    {
     c[i].show(); 
    }
    return 0;
}
