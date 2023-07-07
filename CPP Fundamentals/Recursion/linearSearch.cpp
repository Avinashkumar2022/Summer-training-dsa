#include<iostream>
using namespace std;

bool linearSearch(int* arr,int size,int key)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    
    else{
        return linearSearch(arr+1,size-1,key);
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

    bool result=linearSearch(array,size,key);
    if(result)
    {
        cout<<"Element exists";
    }
    else{
        cout<<"Element doesn't exist";
    }
    return 0;
}