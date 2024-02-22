#include <iostream>
#include <cstdio>
#include <math.h>
#include <time.h>
using namespace std;
class Accidents
{
    public:
    int mat[11][39]={0};
    int n, ave, street;
    
    void readN()
    {
        cout <<"How many accidents ?";
        cin >> n;
    }

    void fillMatrix()
    {
     int count;
    
     for (count=1; count<=n; count++)
        {
            ave=rand()%10+1;
            street=rand()%9+30;
            mat[ave][street]++;
        }
     }
    void printMatrix()
    {
        cout <<"Ave                 Streets"<<endl;
        cout <<"     30  31  32  33  34  35  36  37  38 "<< endl;
        for (ave=1; ave <= 10; ave++)
        {
            printf("%3d", ave);
            for (street=30; street<=38; street++)
            {
            printf("%4d", mat[ave][street]);
            }
            cout<<endl;
        }

    }
};
void dangerous(Accidents a)
{
    int r, c, hr, hc, count;
    cout <<"The most dangerous intersections are"<<endl;
    cout <<"Ave    Streets    Accidents"<<endl;
    for(count=1; count<=10; count++)
    {
        hr=1;
        hc=30;
        for(r=1;r<=10;r++)
        {
            for (c=30; c<=38; c++)
            {
                if(a.mat[r][c]>a.mat[hr][hc])
                {
                    hr=r;
                    hc=c;
                }
            }
        }
    
    cout <<hr<<"         "<<hc<<"         ";
    cout <<a.mat[hr][hc]<<endl;
    a.mat[hr][hc]=0;
    }
}
int main()
{
    Accidents a;
    srand(time(NULL));
    a.readN();
    a.fillMatrix();
    a.printMatrix();
    dangerous(a);
    return 0;
}