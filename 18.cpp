#include<iostream>                          //Bubble Sorting in c++
using namespace std;
int main()
{
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    int nums[size];
    cout<<"enter elements in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>nums[i];
    }

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(nums[i]>nums[j])
            {
                swap(nums[i],nums[j]);
            }
        }
    }

    cout<<"The final result is : ";
    for(int i=0;i<size;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}