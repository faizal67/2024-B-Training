#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if (arr[i]==key)
    {
        return i;
    }
    return firstOccurence(arr,n,i+1,key);
    
}

int lastOccurence(int arr[],int n,int i,int key)
{
    if (i==n)
    {
        return -1;
    }
    int restArray = lastOccurence(arr,n,i+1,key);
    if(restArray!=-1)
    {
        return restArray;
    }
    if (arr[i]==key)        
    {
        return i;
    }
    return -1;
    
}
int main()
{
    int n,key;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value to be search: ";
    cin>>key;
    int fOccurence,lOccurence;
    fOccurence=firstOccurence(arr, n,0,key);
    lOccurence=lastOccurence(arr, n,0,key);

    cout<<"First occurence of "<<key<<" is at index:"<<fOccurence<<" & "<<"last occrence of "<<key<<" is at index:"<<lOccurence;

    
}