#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter elements in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    cout<<"single elements present in array is : "<<ans<<endl;
}