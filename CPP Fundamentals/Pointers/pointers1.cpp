#include<iostream>
using namespace std;

int main()
{
    //Pointers is a type of datatype which holds the address of other datatypes.

    int a=3;
    int* b=&a;
    cout<<"Address of a is: "<<b<<endl;
    cout<<"Address of a is: "<<&a<<endl;
    


    //& ---> Address of operator

    // * ---> Dereference operator
    cout<<"The value at address b is: "<<*b<<endl;
}