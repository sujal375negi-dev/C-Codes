#include<iostream>                //sorting 0, 1 and 2 in an array
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

    int low=0;
    int mid=0;
    int high=size-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[mid],arr[high]);
            high--;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
    }

    cout<<"The resultant array is : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}