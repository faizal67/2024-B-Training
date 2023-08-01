//Move all x to the end of the string 
/*

XfXa
X+(fXa)
X+f+(Xa)
X+f+X+(a);
X+f+X+a<--' '
X+f+X+a
X+f+X<--a
X+f<--aX
X<--faX
faXX


*/
#include<iostream>
#include<string.h>
using namespace std;

string moveX(string str)
{
    if(str.length()==0)
    {
        return "";
    }
    char ch=str[0];
    string ans=moveX(str.substr(1));

    if(ch=='X')
    {
        return ans+ch;
    }
    return ch+ans;
}

int main()
{
    string str;
    cout<<"Enter the string containing 'X' character: ";
    getline(cin,str);
    cout<<moveX(str);
}