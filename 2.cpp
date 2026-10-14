#include<iostream>                  //longest valid parenthesis
#include<stack>
using namespace std;

int longest_valid_parenthesis(string str[],int size)
{
    int ans=0;
    stack<int>s;
    s.push(-1);
    for(int i=0;i<size;i++)
    {
        if(str[i]=="(")
        {
            s.push(i);
        }
        else
        {
            s.pop();
            if(s.empty())
            {
                s.push(i);
            }
            else
            {
                ans=i-s.top();
            }
        }
    }
    return ans;
}
int main()
{
    int size;
    cout<<"enter size of string"<<endl;
    cin>>size;

    string str[size];
    cout<<"enter ) or ( in string"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>str[i];
    }

    cout<<"longest valid parenthesis is of size : "<<longest_valid_parenthesis(str,size)<<endl;
}