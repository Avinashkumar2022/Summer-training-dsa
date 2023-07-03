#include<iostream>
using namespace std;

int main()
{
    //Create a 2D array-
    int arr[3][4];
    int key,count=0,row_index,column_index;

    cout<<"Enter the elements of the array: "<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            cin>>arr[row][column];
        }
        
    }

    cout<<"Enter the number you want to find: ";
    cin>>key;

    for(int row=0;row<3;row++)
    {
        for(int column=0;column<4;column++)
        {
            if(arr[row][column]==key)
            {
                count++;
                row_index=row;
                column_index=column;
                
            }
        }
    }

    for(int row=0;row<3;row++)
    {
        for(int column=0;column<4;column++)
        {
            cout<<arr[row][column]<<"\t";
        }
        cout<<endl;
    }
    if(count>0)
    {
        cout<<"The number exists in the array."<<endl;
        cout<<"Last index of the element is: "<<row_index<<","<<column_index<<endl;
        
    }
    else{
        cout<<"The number does't exist in the array.";
    }
}