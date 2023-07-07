#include <iostream>
using namespace std;

bool isSorted(int* arr, int size)
{
    if (size <= 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    return isSorted(arr + 1, size - 1);
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

    bool result = isSorted(array, size);

    if (result)
    {
        cout << "The array is sorted" << endl;
    }
    else
    {
        cout << "The array is not sorted" << endl;
    }

    delete[] array;

    return 0;
}
