#include<iostream>
using namespace std;

bool binarySearch(int* array,int left,int right,int key)
{
    int mid=left+((right-left)/2);

    if(left>right)
    {
        return false;
    }
    if(array[mid]==key)
    {
        return true;
    }
    if(array[mid]<key)
    {
        return binarySearch(array,mid+1,right,key);
    }

    if(array[mid]>key)
    {
        return binarySearch(array,left,mid-1,key);
    }
}

int main()
{
    int size,key;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int* array=new int[size];
    cout<<"Enter the element to be searched: ";
    cin>>key;
    cout<<"Enter the elements of the array: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    bool result=binarySearch(array,0,size-1,key);
    if(result)
    {
        cout<<"Element exists";
    }
    else{
        cout<<"Element doesn't exist";
    }
    return 0;
}