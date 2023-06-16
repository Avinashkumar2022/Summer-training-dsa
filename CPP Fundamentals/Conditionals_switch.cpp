#include<iostream>
using namespace std;
int main()
{
    //If-Else statement
    int age;
    cin>>age;
    switch(age)
    {
        case 10:
        cout<<"Age is 10";
        break;

        case 15:
        cout<<"Age is 15";
        break;
        
        case 20:
        cout<<"Age is 20";
        break;
        
        case 25:
        cout<<"Age is 25";
        break;

        default:
        cout<<"No case matching the input";
        break;
    }

}