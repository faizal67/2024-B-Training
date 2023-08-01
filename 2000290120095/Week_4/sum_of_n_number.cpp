#include<iostream>
using namespace std;
void f(int index,int sum)
{
    if(index==0)
    {
        cout<<sum;
        return;
    }
    
    f(index-1,sum+index);
    
}
int main()
{
    f(5,0);
}
