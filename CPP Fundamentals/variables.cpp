#include<iostream>
using namespace std;

    // Use descriptive and easy to read variable names. Preferably in camelCase.
int main()
{
    int num1=20;           //4 bytes
    int num2=23;
    int num3 =num1-num2;
    cout<<num3;      


    float y=10.5f;         //4 bytes
    double myDouble=11.3;  //8 bytes

    string myString="A man destined to be greater than what he will ever realised";

    char myChar='A';

    const int constant=5; 
    //If we add const in front of a variable then we won't be able to change the value of that variable later in the program.
    //constant=8 not allowed


}