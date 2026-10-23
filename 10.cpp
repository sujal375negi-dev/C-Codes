#include<iostream>
using namespace std;

void swap(int nums[],int size,int i,int j)
{
    while(i<j)
    {
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
        i++;
        j--;
    }
}

void aclkrotate(int nums[],int size,int k)
{
    swap(nums,size,0,k-1);
    swap(nums,size,k,size-1);
    swap(nums,size,0,size-1);

    cout<<"resultant nums after "<<k<<" times rotation is :";
    for(int i=0;i<size;i++)
    {
        cout<<nums[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    int nums[size];
    cout<<"enter elements in nums"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>nums[i];
    }

    int k;
    cout<<"enter k"<<endl;
    cin>>k;

    aclkrotate(nums,size,k);
}