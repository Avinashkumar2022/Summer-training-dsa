#include<iostream>
using namespace std;

void selection_Sort(int* arr,int size)
{
    for(int i=0;i<size-1;i++)
    {
        int min_Index=i;

        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<=arr[min_Index])
            {
                min_Index=j;
            }
        }
        swap(arr[min_Index],arr[i]);
    }
}


int main()
{
    int numberOfElements;
    cout<<"Enter the total number of elements: ";
    cin>>numberOfElements;

    int* arr=new int[numberOfElements];

    for(int i=0;i<numberOfElements;i++)
    {
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
    }

    selection_Sort(arr,numberOfElements);

    for(int i=0;i<numberOfElements;i++)
    {
        cout<<arr[i]<<" ";
    }
}