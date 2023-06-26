#include<iostream>
using namespace std;

int findLastOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int lastOccurrence = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            lastOccurrence = mid;
            start = mid + 1; // Look for the last occurrence on the right side
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return lastOccurrence;
}

int main()
{
    int arr[] = {2, 4, 8, 8, 11, 19, 33, 41, 33, 55, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    std::cout << "Enter the number you want to find: ";
    std::cin >> key;

    int lastOccurrence = findLastOccurrence(arr, size, key);

    if (lastOccurrence == -1)
    {
        std::cout << "Element not found";
    }
    else
    {
        std::cout << "Last occurrence found at index: " << lastOccurrence;
    }

    return 0;
}
