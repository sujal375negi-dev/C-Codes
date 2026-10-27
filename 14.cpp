#include<iostream>                                   //Program to print factorial of a number
using namespace std;

int factorial(int num,int ans)
{
    if(num==0||num==1)
    {
        return 1;
    }
    ans=num*factorial(num-1,ans);
    return ans;
}
int main()
{
    int main();
    int num;
    cout<<"enter number to calaculate its factorial"<<endl;
    cin>>num;
    int ans=1;
    cout<<"The Factorial of "<<num<<" is "<<factorial(num,ans);
}