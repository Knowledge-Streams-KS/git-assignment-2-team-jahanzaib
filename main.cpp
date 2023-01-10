#include<iostream>
#include"subtraction.h"
#include"addition.h"
#include"division.h"
#include"multiply.h"
#include"squareroot.h"
#include"modulus.h"

using namespace std;

void main()
{
    cout<<"Creating a calculator"<<endl<<endl;
    int a,b,opt;

    cout<<"Select Option: "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Modulus"<<endl;
    cout<<"6. Square Root"<<endl;
    cout<<"Enter your option : ";
    cin>>opt;
    cout<<endl<<endl;

    if(opt==1)//Addition
    {
        cout<<"Enter First number : ";
        cin >> a;
        cout<<"Enter Second number : ";
        cin >> b;
        cout<<a<<" + "<<b<<" = "<<addition(a,b)<<endl;
    }
    else if(opt==2)//Subtraction
    {
        cout<<"Enter First number : ";
        cin >> a;
        cout<<"Enter Second number : ";
        cin >> b;
        if(a>b)
        {
            cout<<a<<" - "<<b<<" = "<<subtraction(a,b)<<endl;
        }
        else
        {
            cout<<b<<" - "<<a<<" = "<<subtraction(a,b)<<endl;
        }
    }
    else if(opt==3)//Multiplication
    {
        cout<<"Enter First number : ";
        cin >> a;
        cout<<"Enter Second number : ";
        cin >> b;
        cout<<a<<" * "<<b<<" = "<<multiply(a,b)<<endl;        
    }
    else if(opt==4)//Divion
    {    
        cout<<"Enter First number : ";
        cin >> a;
        cout<<"Enter Second number : ";
        cin >> b;
        cout<<a<<" / "<<b<<" = "<<division(a,b)<<endl;
    }
    else if(opt==5)//Modulus
    {
        cout<<"Enter First number : ";
        cin >> a;
        cout<<"Enter Second number : ";
        cin >> b;
        cout<<a<<" % "<<b<<" = "<<modulus(a,b)<<endl;
    }
    else if(opt==6)//Square Root
    {
        cout<<"Enter the Number for Square Root : ";
        cin>>a;

    }
}