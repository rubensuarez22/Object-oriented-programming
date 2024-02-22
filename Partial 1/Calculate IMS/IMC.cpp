#include <iostream>
#include <cstdio>
#include <cstdlib>
#include<cmath>
#include<time.h>
using namespace std;

class persona
{
    public:
    char name[100];
    int age;
    int sex;
    float weight;
    float height;
    float IMC;


    void generateData()
    {
       cout<<" Please write your name "<<endl;
        cin>>name;
            cout<<" Generating random age"<<endl;
            age = rand()%99+8;
        cout<<age<<endl;
        do{
        cout<<" Please choose a gender [1 for F or 2 for M]"<<endl;
        cin>>sex;
        }while(sex>2);
        
        cout<<" Generating random weight "<<endl;
        weight = rand()%250+30;
        cout<<weight<<endl;
        cout<<" Generating random height [in cm]"<<endl;
        height = rand()% 120+250;
        cout<<height<<endl;
       
    }
    



    void readData()
    {
       cout<<" Please write your name "<<endl;
        cin>>name;
        do 
        {     
            cout<<" Please write your age (Higher than 0)"<<endl;
            (cin>>age);
        }while (age<1);
        cout<<" Please write your gender [1 for F or 2 for M]"<<endl;
        cin>>sex;
        cout<<" Please write your weight "<<endl;
        cin>>weight;
        
        do
        {
           cout<<" Please write your height [in cm]"<<endl;
            cin>>height;
        } while (height <2.2);
        
    }

    int isLegalAge()
    {
        if (age>17){
            age=1;
            cout<<name<<"Is legal"<<endl;
        }else{
            age=0;
            cout<<"You are not legal"<<endl;
        }
        return age;
    }
        void whatSex()
    {
        if (sex == 1){
            
            cout<<"You are girl"<<endl;
        }else{
            cout<<"You are a boy"<<endl;
        }
    }

    void aIMC()
    {
        height = height/100;
        IMC = weight / pow(height, 2.0);
        cout<< "your weight is "<<weight<<endl;
        cout<<"your height is "<<height<<endl;
        cout<<"Your IMC is "<<IMC<<endl;

        if(IMC<20)
{
cout<<"You are under your ideal weight";
}
if((IMC>=20)&&(IMC<=25))
{
cout<<"You are in your ideal weight";
}
if(IMC>25)
{
cout<<"You are overweight";
}
if(IMC>30)
{
cout<<"You are obese";
}
    }

    void menu()
    {
        int op;
        cout<<"[1] Data "<<endl;
        cin >>op;
        switch(op)
        {
            case 1: 
            cout<<"The data from "<<name<<"is "<<endl;
            cout<<"Age = "<<age<<endl;
            cout<<"Gender = "<<sex<<endl;
            cout<<"Weight = "<<weight<<" Kg "<<endl;
            cout<<"Height = "<<height<<" cm "<<endl;
            break;
        }

    }

};



int main()
{
    srand(time(NULL));
    persona a,b,c,d,e;
    int op;
    cout<<"Hi, choose either automatic [1] or manual try [2]"<<endl;
    cin>>op;
    switch(op){ 
        case 1: 
        a.generateData();
        b.generateData();
        c.generateData();
        d.generateData(); 
        e.generateData();
        break;
        case 2: 
        a.readData();
        b.readData();
        c.readData();
        d.readData();
        e.readData();
        break;
    }
    cout<<"Which person do you want to know about? [Choose from 1-5]";
    int info;
    cin>>info;
    switch(info){
        case 1:
        a.menu();
        a.whatSex();
        a.aIMC();
        case 2:
        b.menu();
        b.whatSex();
        b.aIMC();
        case 3:
        c.menu();
        c.whatSex();
        c.aIMC();
        case 4:
        d.menu();
        d.whatSex();
        d.aIMC();
        case 5:
        e.menu();
        e.whatSex();
        e.aIMC();
    }


    /*
    a.readData();
    b.readData();
    c.readData();
    d.readData();
    e.readData();
    a.isLegalAge();
    a.whatSex();
    if (a.IMC > 20)
    {
        cout<<"nice";
    } else {
        cout<<"not nice";
    }
    */
    return 0;
}