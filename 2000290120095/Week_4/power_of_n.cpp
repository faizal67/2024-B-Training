#include<iostream>
using namespace std;

int fpower(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int prevpower=fpower(n,p-1);
    return n*prevpower;

}
int main()
{
    int base,power,ans;
    cout<<"Enter the Base value: ";
    cin>>base;
    cout<<"Enter the Power value: ";
    cin>>power;
    ans=fpower(base,power);
    cout<<"Calculated value is: "<<ans;
}