#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,temp,r,sum=0;
    cout<<"enter a number=";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(sum==num)
    {
        cout<<"armstrong";
     }
     else
     {
         cout<<"not armstrong";
     }
     getch();
}
