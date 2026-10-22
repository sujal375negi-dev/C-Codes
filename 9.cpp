#include<iostream>                   //subsets of a array whose sum is equal to K
#include<vector>
using namespace std;

void solve(int nums[],int size,int k,int index,int sum,vector<int>res)
{
    if(sum==k)
    {
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(index>=size)
    {
        return;
    }


    solve(nums,size,k,index+1,sum,res);
    sum+=nums[index];
    res.push_back(nums[index]);
    solve(nums,size,k,index+1,sum,res);
}

int main()
{
    int size;
    cout<<"enter size of nums"<<endl;
    cin>>size;
    int nums[size];
    cout<<"enter numbers in nums"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>nums[i];
    }

    int k;
    cout<<"enter k"<<endl;
    cin>>k;

    vector<int>res;
    int index=0;
    int sum=0;

    solve(nums,size,k,index,sum,res);
}