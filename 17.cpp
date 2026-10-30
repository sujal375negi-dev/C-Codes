#include<iostream>                                     //Program To Find Next Permutation
#include<algorithm>
#include<vector>

using namespace std;
void nextpermutation(vector<int>&nums,int size)
{
    int j=size-1;
    int i=j-1;
    while(i>=0&&nums[i]>=nums[j])
    {
        i--;
        j--;
    }
    if(i<0)
    {
        reverse(nums.begin(),nums.end());
        return;
    }
    int k=size-1;
    while(nums[k]<=nums[i])
    {
        k--;
    }
    swap(nums[i],nums[k]);
    reverse(nums.begin()+i+1,nums.end());
    return;
}

int main()
{
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    vector<int> nums(size);
    cout<<"enter number of "<<size<<" size"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>nums[i];
    }
    nextpermutation(nums,size);
    for(int i:nums)
    {
        cout<<i<<" ";
    }
    return 0;
}