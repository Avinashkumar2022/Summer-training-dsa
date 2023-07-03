#include<iostream>
using namespace std;

void insertionSort(int* arr,int size)
{
    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        int j=i-1;

        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
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

    insertionSort(array_Of_Integers,num_of_elements);


    cout<<"Sorted array: ";
    for(int i=0;i<num_of_elements;i++)
    {
        cout<<array_Of_Integers[i]<<" ";
    }

    delete[] array_Of_Integers;
}