/*

Memory allocation in C++ is done by two methods:
- Static Memory allocation ->compile time allocation

-Dynamic Memory allocation ->Run time allocation


--STATIC MEMORY ALLOCATION--

int main()
{
    int x;
    char ch;
    int arr[100];
}

-SMA is where size and location where variables will be stored is fixed during compile time.
-location is saved but actual physical memory is not alocated to the variable at compile time because actual physical memory is allocated at runtime.
-SMA is slightly faster than DMA.
-Allocation and Deallocation is done by compiler itself.

* DYNAMIC MEMORY ALLOCATION--

int *p=new int;

-Happens during the execution of the program in the heap memory.
-"new" keyword is used to allocate memory.
-"delete" keyword is used to deallocate the memory.
-Both allocation and deallocation needs to be done by us.

int main()
{
    int n;
    cin>>n;
    int *arr=new arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    TO FREE UP SPACE-
    delete arr[];
}


*/