// To check array is sorted or not
#include<iostream>
using namespace std;


bool checkSort(int arr[],int n)
{
    if(n==1)
    return true;
    bool restarray=checkSort(arr+1,n-1);
    return (arr[0]<arr[1] & restarray);
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    if(checkSort(arr,n))
    {
        cout<<"Array is sorted";
    } 
    else
    cout<<"Array is unsorted";
}