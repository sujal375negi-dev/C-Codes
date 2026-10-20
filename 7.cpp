#include<iostream>            //First -ve integer in every window of size k
#include<queue>
using namespace std;

void answer(int nums[],int size,int k)
{
    queue<int>q;
    vector<int>ans;
    //processing first window of size k
    for(int i=0;i<k;i++)
    {
        if(nums[i]<0)
        {
            q.push(i);
        }
    }
    //checking if answer exist
    if(!q.empty())
    {
        ans.push_back(nums[q.front()]);
    }
    else
    {
        ans.push_back(0);
    }

    //processing remaining windows of size k
    for(int i=k;i<size;i++)
    {
        //scope checking
        if(i-q.front()>=k)
        {
            q.pop();
        }
        //checking required condition
        if(nums[i]<0)
        {
            q.push(i);
        }
        //checking if answer exist
        if(!q.empty())
        {
            ans.push_back(nums[q.front()]);
        }
        else
        {
            ans.push_back(0);
        }
    }

    cout<<"The resultant ans array is : ";
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<' ';
    }
}

int main()
{
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int nums[size];
    cout<<"enter "<<size<<" elements in nums"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>nums[i];
    }
    int k;
    cout<<"enter window size"<<endl;
    cin>>k;
    
    answer(nums,size,k);
}