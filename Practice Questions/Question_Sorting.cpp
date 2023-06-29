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
    int num_of_elements1;
    cout<<"Enter the total number of elements in the First array: ";
    cin>>num_of_elements1;

    int* array_Of_Integers1=new int[num_of_elements1];
    cout<<"Enter the elements: ";
    for(int i=0;i<num_of_elements1;i++)
    {
        cin>>array_Of_Integers1[i];
    }

    int num_of_elements2;
    cout<<"Enter the total number of elements in the Second array: ";
    cin>>num_of_elements2;

    cout<<"Enter the elements: ";
    int* array_Of_Integers2=new int[num_of_elements2];

    for(int i=0;i<num_of_elements2;i++)
    {
        cin>>array_Of_Integers2[i];
    }

    int final_num=num_of_elements1+num_of_elements2;

    int* final_Array=new int[final_num];


    int i = 0, j = 0, k = 0;  
    while (i < num_of_elements1) 
    {
        final_Array[k] = array_Of_Integers1[i]; 
        i += 1;  
        k += 1;  
    }  
    while (j < num_of_elements2) 
    { 
        final_Array[k] = array_Of_Integers2[j]; 
        j += 1;  
        k += 1;  
    }  

    bubbleSort(final_Array,final_num);


    cout<<"Sorted array: ";
    for(int i=0;i<final_num;i++)
    {
        cout<<final_Array[i]<<" ";
    }

    delete[] array_Of_Integers1;
    delete[] array_Of_Integers2;
    delete[] final_Array;
}