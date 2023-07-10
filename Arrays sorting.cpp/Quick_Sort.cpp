#include<iostream>
using namespace std;


int partition(int* arr,int start,int end)
{
    //find pivot(first element)
    int pivot=arr[start];

    //counting the numbe of elements less than pivot
    //Using the count variable we will find where we need to put the pivot element.
    int count=0;
    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }


    int pivotIndex=start+count;

    swap(arr[pivotIndex],arr[start]);


    int i=start;
    int j=end;

    while(i<pivotIndex && j>pivotIndex)
    {
        while (arr[i]<pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        swap(arr[i++],arr[j--]);
        
    }
    return pivotIndex;

}

void quickSort(int* arr,int start,int end)
{
    if(start>=end)
    {
        return;
    }
    //partition
    int p=partition(arr,start,end);

    //sort Left
    quickSort(arr,start,p-1);

    // sort right
    quickSort(arr,p+1,end);
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

    quickSort(array,0,size-1);

    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}