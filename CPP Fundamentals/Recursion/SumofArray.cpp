#include<iostream>
using namespace std;

int sum(int* arr,int size)
{
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }
    else{
        return arr[0]+sum(arr+1,size-1);
    }
}

int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int* array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    cout<<sum(array,size);

    delete[] array;
    return 0;
}