#include<iostream>
using namespace std;

int main()
{
    //Pointers is a type of datatype which holds the address of other datatypes.

    int a=3;
    int* b=&a;
    cout<<a;
    cout<<"Address of a is: "<<b<<endl;
    cout<<"Address of a is: "<<&a<<endl;
    //derefencing the pointer
    cout<<*b<<endl;

    float x=10.4;
    cout<<"Address of x is: "<<&x<<endl;


    //& ---> Address of operator

    // * ---> Dereference operator
    cout<<"The value at address b is: "<<*b<<endl;

    int var=5;
    int *p;
    p=&var;

    cout<<var<<endl;
    cout<<p<<endl; 
}