#include<iostream>
using namespace std;
void f(int st,int end)
{
    if(st>end)
    return;
    f(st+1,end);
    cout<<"faizal"<<endl;
}
int main()
{
    f(1,5);
}
