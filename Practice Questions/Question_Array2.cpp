// Write a code to find the first, last and total occurrences of an integer in a sorted integer array.


// Practice of the previously done question


#include<iostream>
using namespace std;

int find_First(int* arr,int size,int key)
{
    int start=0;
    int end=size-1;
    int first_index=-1;
    while(start<=end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]==key)
        {
            first_index=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return first_index;
}

int find_Last(int* arr,int size,int key)
{
    int start=0;
    int end=size-1;
    int last_index=-1;

    while(start<=end)
    {
        int mid=start + (end - start)/2;
        if (arr[mid]==key)
        {
            last_index=mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return last_index;
}

int input()
{
    int key;
    cout<<"Enter the number you want to find: ";
    cin>>key;
    return key;
}

int* input_array(int number_Of_Elements)
{

    int* array_Of_Integers=new int[number_Of_Elements];

    for(int i=0;i<number_Of_Elements;i++)
    {
        cout<<"Enter element "<<i<<": ";
        cin>>array_Of_Integers[i];
    }

    return array_Of_Integers;
}

int main()
{
    int number_Of_Elements;
    cout<<"Enter the total number of elements in the array: ";
    cin>>number_Of_Elements;

    int* arr=input_array(number_Of_Elements);

    int key=input();
    int size=number_Of_Elements;
    int first_index=find_First(arr,size,key);

    if(first_index==-1)
    {
        cout<<"Entered number doesn't exist in the array"<<endl<<"To search Another number press 1\nTo teminate the program press 0"<<endl;
        int choice;
        cin>>choice;
        switch(choice)
        {
            case(0):
            {
                return 0;
            }

            case(1):
            {
                input();
            }
            default:
            {
                cout<<"Invalid Entry"<<endl;
            }
        }

    }

    int last_index=find_Last(arr,size,key);

    int total_Number_of_Integers=last_index-first_index+1;

    cout<<"The First occurrence of that element is on the index: "<<first_index<<endl;
    cout<<"The Last occurrence of that element is on the index: "<<last_index<<endl;
    cout<<"The total occurrences of the element: "<<total_Number_of_Integers;

    delete[] arr;

    return 0;
    
}