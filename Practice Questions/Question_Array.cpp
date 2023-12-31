#include <iostream>

int findFirstOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int firstOccurrence = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            firstOccurrence = mid;
            end = mid - 1; // Look for the first occurrence on the left side
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

    return firstOccurrence;
}

int main()
{
    int arr[] = {2, 4, 8, 8, 11, 19, 33, 41,33, 55, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    std::cout << "Enter the number you want to find: ";
    std::cin >> key;

    int firstOccurrence = findFirstOccurrence(arr, size, key);

    if (firstOccurrence == -1)
    {
        std::cout << "Element not found";
    }
    else
    {
        std::cout << "First occurrence found at index: " << firstOccurrence;
    }

    return 0;
}
