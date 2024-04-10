#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c=1,d;
    cout<<"Enter the number of terms: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<a<<"\t";
        }
        else if(i==2)
        {
            cout<<b<<"\t";
        }
         else if(i==3)
         {
            cout<<c<<"\t";
         }
         else
         {
            d=a+b+c;
            cout<<d<<"\t";
            a=b;
            b=c;
            c=d;
         }
         
    }
    return 0;
}