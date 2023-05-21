#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2,mul,add;
    double div;
    cout<<"enter two num=";
    cin>>num1>>num2;

    mul=num1*num2;

    add=num1+num2;
    div=(float)num1/num2;

    cout<<showpoint<<fixed<<setprecision(2)<<setw(20)<<"mul="<<mul<<endl<<setw(20)<<"div="<<div<<endl<<setw(20)<<noshowpoint<<"add="<<add;



    getch();
}
