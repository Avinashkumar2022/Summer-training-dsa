//Send all the zeroes in the array to the end and sort the rest of the array.


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

void reverse(int arr[], int size, int index)
{
    int start=index;
    int end=size-1;
    for(int i = start; i < end; i++, end--)
    {
        int temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
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
    
    int index=0;
    for(int i=0;i<num_of_elements;i++)
    {
        if(array_Of_Integers[i]!=0)
        {
            index=i;
            break;
        }
        else
        {
            index=num_of_elements;
        }
    }

    reverse(array_Of_Integers,num_of_elements,index);


    for(int i=0;i<num_of_elements;i++)
    {
        cout<<array_Of_Integers[i]<<" ";
    }

    delete[] array_Of_Integers;
}