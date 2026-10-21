#include<iostream>              //Finding Prime Using Sieve Of Eratosthenes Method
#include<vector>
using namespace std;

int calculate(int range)
{
    int count=0;
    vector<bool>ans(range,true);
    if(range==0||range==1)
    {
        return 0;
    }

    ans[0]=ans[1]=false;
    for(int i=2;i*i<range;i++)
    {
        if(ans[i]==true)
        {
            for(int j=i*i;j<range;j+=i)
            {
                ans[j]=false;
            }
        }
    }
    cout<<"The prime numbers between 0 and range are ";
    for(int i=0;i<range;i++)
    {
        if(ans[i]==true)
        {
            cout<<i<<' ';
            count++;
        }
    }
    cout<<endl;
    return count;
}

int main()
{
    int range;
    cout<<"enter range till where you want to find prime numbers"<<endl;
    cin>>range;
    cout<<"Total No of prime numbers between 0 and range is "<<calculate(range)<<endl;
}