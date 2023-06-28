#include<iostream>
using namespace std;

/*

*Selection Sort works by repeatedly finding the minimum element from the unsorted part of the array and swapping it with the element at the beginning of the unsorted part. This process is iterated until the entire array becomes sorted.

Selection Sort is an algorithm that sorts an array by repeatedly finding the minimum element from the unsorted part and placing it at the beginning. The algorithm divides the array into two parts: the sorted part and the unsorted part. Initially, the sorted part is empty, while the unsorted part contains all the elements.

In each iteration, Selection Sort scans the unsorted part to find the minimum element and swaps it with the leftmost element of the unsorted part. This effectively expands the sorted part by one element and shrinks the unsorted part by one element. The process is repeated until the entire array becomes sorted.

The main idea behind Selection Sort is to select the smallest (or largest) element from the unsorted part and place it in its correct position in the sorted part. This selection process is performed iteratively, gradually building up the sorted part of the array. At each step, the algorithm ensures that the current smallest element is correctly positioned, guaranteeing that the overall array will be sorted when the process is completed.

Selection Sort has a time complexity of O(n^2), where n is the number of elements in the array. It is not the most efficient sorting algorithm for large datasets but can be useful for small arrays or when the number of swaps needs to be minimized


*/


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