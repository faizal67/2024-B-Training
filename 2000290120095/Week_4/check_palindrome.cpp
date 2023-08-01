#include<iostream>
#include<string.h>
using namespace std;
bool f(int index,string s)
{
    if(index>=s.size()/2)
    return true;
    if(s[index]!=s[s.size()-index-1])
    return false;
    return f(index+1,s);
}
int main()
{
    string s="madam";
    cout<<f(0,s);
}
