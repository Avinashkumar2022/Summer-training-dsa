#include<iostream>
#include<vector>

using namespace std;

int main()
{
    //the syntax for declaring an array
    int arr[5];

    // The syntax for declaring an array
    vector<int> num={1,2,3,4,5};

    cout<<"Size of vector before updating is: " <<num.size()<<endl;

    cout<<"Orignal Vector: ";

    for(int i:num)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //ADD
    num.push_back(6);
    num.push_back(7);
    
    num.insert(num.begin()+2,8);
    num.insert(num.end(),{2,8});

    //Access
    cout<<"The element is index 2 is: "<<num.at(3)<<endl;
    cout<<"The first element in the vector is: "<<num.front()<<endl;
    cout<<"The last element in the vector is: "<<num.back()<<endl;

    //Delete
    num.pop_back();


    //size

    //Total number of elements currently stored in the vector
    cout<<"Size of vector after updating is: " <<num.size()<<endl;
    
    //Total number of elements that the vector can hold without increasing the size
    cout<<"The total capacity of the vector is: "<<num.capacity()<<endl;

    cout<<"Updated Vector: ";
    
    for(int i:num)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    //clear
    cout<<"The array has been cleared";
    num.clear();
    for(int i:num)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}