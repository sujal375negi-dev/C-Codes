#include<iostream>                      //sum of maximum and minimum elements of all subarrays of size k
#include<vector>
#include<queue>
using namespace std;

vector<int>calculate1(int arr[],int size,int k)
{
    deque<int>dq1;
    dq1.push_back(0);
    vector<int> res;
    for(int i=1;i<k;i++)
    {
        while(!dq1.empty()&&arr[i]>arr[dq1.back()])
        {
            dq1.pop_back();
        }
        dq1.push_back(i);
    }
    res.push_back(arr[dq1.front()]);

        for(int i=k;i<size;i++)
        {
            if(i-dq1.front()>=k)
            {
                dq1.pop_front();
            }

            while(!dq1.empty()&&arr[i]>arr[dq1.back()])
            {
                dq1.pop_back();
            }
            dq1.push_back(i);
            res.push_back(arr[dq1.front()]);
        }
    return res;
}
vector<int>calculate2(int arr[],int size,int k)
{
    deque<int>dq2;
    dq2.push_back(0);
    vector<int> res;
    for(int i=1;i<k;i++)
    {
        while(!dq2.empty()&&arr[i]<arr[dq2.back()])
        {
            dq2.pop_back();
        }
        dq2.push_back(i);
    }
    res.push_back(arr[dq2.front()]);

        for(int i=k;i<size;i++)
        {
            if(i-dq2.front()>=k)
            {
                dq2.pop_front();
            }

            while(!dq2.empty()&&arr[i]<arr[dq2.back()])
            {
                dq2.pop_back();
            }
            dq2.push_back(i);
            res.push_back(arr[dq2.front()]);
        }
    return res;
}

using namespace std ;
int main()
{
    int size;
    cout<<"enter size"<<endl;
    cin>>size;

    int arr[size];
    cout<<"enter elements in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"enter k"<<endl;
    cin>>k;

    vector<int>ans1=calculate1(arr,size,k);
    vector<int>ans2=calculate2(arr,size,k);


    cout<<"The resultant answer is : ";
    for(int i=0;i<ans1.size();i++)
    {
        cout<<ans1[i]+ans2[i]<<" ";
    }
}