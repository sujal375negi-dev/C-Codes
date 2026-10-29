#include<iostream>              //Printing Fibonacci Series
using namespace std;
int main()
{
    int n;
    cout<<"enter how much series you want"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    if(n==1)
    {
        cout<<a<<" ";
        return 1;
    }
    if(n==2)
    {
        cout<<a<<" ";
        cout<<b<<" ";
        return 2;
    }
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=2;i<n;i++)
    {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}