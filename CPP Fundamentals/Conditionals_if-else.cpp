#include<iostream>
using namespace std;
int main()
{
    //If-Else statement
    int age;
    cin>>age;
    if(age>0 && age<=12)
    {
        cout<<"You are a child";
    }
    else if (age>12 && age<=18)
    {
        cout<<"You are a teenager";
    }
    else if(age<0)
    {
        cout<<"Not a valid age";
    }
    else
    {
        cout<<"You are an adult";
    }

}