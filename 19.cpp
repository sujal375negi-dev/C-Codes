#include<iostream>                              //Reverse A String
using namespace std;
int main()
{
    string str;
    cout<<"enter string"<<endl;
    getline(cin,str);
    int i=0;
    int j=str.size()-1;
    while(i<=j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }

    cout<<"resultant string is : ";
    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }
    return 0;
}