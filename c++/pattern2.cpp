#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    /* n,row,col;
    cout<<"enter a number=";
    cin>>n;
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    */
/* int n,col,row;
 cout<<"enter a number=";
 cin>>n;
 for(row=1;row<=n;row++)
 {
     for(col=1;col<=row;col++)
     {
         cout<<row;
     }
     cout<<endl;
 }
 for(row=n-1;row>=1;row--)
 {
     for(col=1;col<=row;col++)
     {
         cout<<row;
     }
     cout<<endl;
 }*/
 /*int n,row,col;
 cout<<"enter a number=";
 cin>>n;
 for(row=1;row<=n;row++)
 {
     for(col=1;col<=row;col++)
     {
         cout<<char(col+64);
     }
     cout<<endl;

 }
 for(row=n-1;row>=1;row--)
 {
     for(col=1;col<=row;col++)
     {
         cout<<char(col+64);
     }
     cout<<endl;

 }*/
/* int n,row,col;
 cout<<"enter a number";
 cin>>n;
 for(row=1;row<=n;row++)
 {
     for(col=1;col<=n-row;col++)
     {
         cout<<" ";
     }
     for(col=1;col<=row;col++)
     {
         cout<<col;
     }
     cout<<endl;
 }*/
 /*int n,row,col;
 cout<<"enter a number=";
 cin>>n;
 for(row=1;row<=n;row++)
 {
     for(col=1;col<=n-row;col++)
     {
         cout<<" ";
     }
     for(col=1;col<=row;col++)
     {
         cout<<char(col+64);
     }
     cout<<endl;
 }*/
 int n,row,col;
 cout<<"enter a number=";
 cin>>n;
 for(row=n;row>=1;row--)
 {
     for(col=1;col<=n-row;col++)
     {
         cout<<" ";
     }
     for(col=1;col<=row;col++)
     {
         cout<<col;
         }
     cout<<endl;
 }














    getch();
}
