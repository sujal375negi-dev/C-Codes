#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str;
    cout<<"enter string to reverse"<<endl;
    getline(cin,str);

    stack<char>st;
    for(int i=0;str[i]!='\0';i++)
    {
        st.push(str[i]);
    }

    int i=0;
    while(!st.empty())
    {
        str[i]=st.top();
        i++;
        st.pop();
    }

    cout<<"the reverse string is :"<<endl;
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<' ';
    }
}