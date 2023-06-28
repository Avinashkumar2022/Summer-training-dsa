#include<iostream>
using namespace std;

void bubbleSort(int *arr,int size)
{
    for(int j=0;j<=size-1;j++)
    {
        for(int i=0;i<=size-1;i++)
        {
            int max_index=i+1;
            if(arr[max_index]>=arr[i])
            {
                max_index=i;
            }
            else{
                swap(arr[max_index],arr[i]);
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

    for(int i=0;i<num_of_elements;i++)
    {
        cout<<array_Of_Integers[i]<<" ";
    }
}