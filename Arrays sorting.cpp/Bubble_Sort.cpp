#include<iostream>
using namespace std;

void bubbleSort(int *arr,int size)
{
    for(int j=0;j<=size-1;j++)
    {
        for(int i=0;i<=size-j-1;i++)
        {
            if(arr[i]>=arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
                
        }
    }
}

int main()
{
    int num_of_elements;
    cout<<"Enter the total number of elements in the array: ";
    cin>>num_of_elements;

    int* array_Of_Integers=new int[num_of_elements];

    for(int i=0;i<num_of_elements;i++)
    {
        cin>>array_Of_Integers[i];
    }

    bubbleSort(array_Of_Integers,num_of_elements);
    cout<<"Sorted array: ";
    for(int i=0;i<num_of_elements;i++)
    {
        cout<<array_Of_Integers[i]<<" ";
    }

    delete[] array_Of_Integers;
}