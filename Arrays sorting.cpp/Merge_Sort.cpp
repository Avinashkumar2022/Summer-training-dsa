#include<iostream>
using namespace std;

void merge(int* arr, int left, int right)
{
    int mid = left + ((right - left) / 2);
    int length1 = mid - left + 1;
    int length2 = right - mid;

    int* first = new int[length1];
    int* second = new int[length2];

    int pointer = left;
    for (int i = 0; i < length1; i++)
    {
        first[i] = arr[pointer++];
    }

    pointer = mid + 1;
    for (int i = 0; i < length2; i++)
    {
        second[i] = arr[pointer++];
    }

    // Merge the two arrays

    int index1 = 0;
    int index2 = 0;

    pointer = left;
    while (index1 < length1 && index2 < length2)
    {
        if (first[index1] < second[index2])
        {
            arr[pointer++] = first[index1++];
        }
        else
        {
            arr[pointer++] = second[index2++]; // Error: should be ++index2 instead of index2++
        }
    }

    while (index1 < length1)
    {
        arr[pointer++] = first[index1++];
    }
    while (index2 < length2)
    {
        arr[pointer++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}


void mergeSort(int* array,int left,int right)
{
    if(left==right)
    {
        return;
    }
    int mid=left+((right-left)/2);

    //sort the left side
    mergeSort(array,left,mid);

    //sort the right side
    mergeSort(array,mid+1,right);

    //merge the array again
    merge(array,left,right);
}

int main()
{
    int size;
    cout<<"Enter the total number of elements in the array: ";
    cin>>size;

    int* array=new int[size];

    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }

    mergeSort(array,0,size-1);
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }

    delete[] array;
}