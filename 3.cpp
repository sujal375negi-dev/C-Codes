#include<iostream>
#include<stack>
using namespace std;

bool validparenthesis(string str[],int size)
{
    stack<string>s;
    for(int i=0;i<size;i++)
    {
        if(str[i]=="(")
        {
            s.push(str[i]);
        }
        else
        {
            if(s.size()==0)
            {
                return false;
            }
            if(str[i]==")"&&s.top()=="(")
            {
                s.pop();
            }
        }
    }
    if(s.empty())
    {
        return true;
    }
    return false;
}

int main()
{
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    string str[size];
    cout<<"enter character ( or )"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>str[i];
    }
    if(validparenthesis(str,size))
    {
        cout<<"parenthesis are valid"<<endl;
    }
    else
    {
        cout<<"parenthesis are not valid"<<endl;
        
    }
}