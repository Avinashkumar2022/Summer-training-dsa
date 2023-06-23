#include<iostream>
using namespace std;

int binary(int arr[],int size,int key)
{
    int start,end,mid;
    start=0;
    end=size-1;
    mid=(end+start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(end+start)/2;
    }
    return -1;
}

int main()
{
    int arr[10]={2,4,11,8,33,19,41,99,8,55}; 
    int key;
    cout<<"Enter the number you want to find: ";
    cin>>key;

    int temp=binary(arr,10,key);

    if(temp==-1)
    {
        cout<<"Element not found";
    }
    else
    {
        cout<<temp;
    }
}   