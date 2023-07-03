#include<iostream>
using namespace std;

// Array is a type of data strcuture which stores multiple homogeneous types of elements.

// Arrays hold memory in a contiguous manner.

// Array elements can be directly accessible.

// Searching and sorting is easier in Array when compared to linked list.

// Size of arrays can't be changed later after the initialisaion.


bool linearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int key;
    cout<<"Enter the key value";
    cin>>key;
    int arr[10]={2,4,11,8,33,19,41,99,8,55};
    bool found=linearSearch(arr,10,key);

    if(found) cout<<"Key found"<<endl;
    else cout<<"Key not found"<<endl;
}