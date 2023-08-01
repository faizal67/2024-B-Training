#include<iostream>
#include<string.h>
using namespace std;

string removeDup(string str)
{
    if(str.length()==0)
    {
        return "";
    }
    char ch=str[0];

    string ans=removeDup(str.substr(1)); //here removeDup function gives the string which unique element
    if(ch==ans[0])                       
    {
        return ans;
    }
    return (ch+ans);
}

int main()
{
    string str;
    cout<<"Enter the string containing repeating element: ";
    getline(cin,str);
    cout<<"After removing duplicate element :"<<removeDup(str);
}