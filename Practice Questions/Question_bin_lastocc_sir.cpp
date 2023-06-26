#include<iostream>
using namespace std;

//Find all the occurrence of an element in a sorted array

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

    int arr[] = {2, 4, 8, 8, 11, 19, 33,33, 41, 55, 99,99,99,99,99,99,99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    std::cout << "Enter the number you want to find: ";
    std::cin >> key;

    int firstOccurrence = findFirstOccurrence(arr, size, key);
    int lastOccurrence = findLastOccurrence(arr, size, key);

    if (firstOccurrence == -1)
    {
        std::cout << "Element not found";
    }
    int Total_elements= lastOccurrence-firstOccurrence+1;
     cout<<"The total number of the given elements in the array is: " <<Total_elements;
    

    return 0;

}