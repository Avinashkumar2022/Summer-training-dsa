#include<iostream>
using namespace std;

struct Person
    {
        string haircolour;
        int age;
        string tshirtColour;
    };
int main()
{
    Person person1;
    person1.age=22;
    person1.haircolour="White";
    person1.tshirtColour="Black";

    Person person2;
    person2.age=30;
    person2.haircolour="Brown";
    person2.tshirtColour="White";
    
    Person person3;
    person3.age=40;
    person3.haircolour="Black";
    person3.tshirtColour="Red";


    
    // struct
    // {
    //     int num;
    //     string name;
    // }myStruct,myStruct1,myStruct2;

    // myStruct.name="Hello";
    // myStruct.num=1;

    // myStruct1.name="Hi";
    // myStruct1.num=2;
    
    // myStruct2.name="Namaste";
    // myStruct2.num=3;

    // cout<<myStruct.name<<endl;
    // cout<<myStruct.num<<endl;
    // cout<<myStruct1.name<<endl;
    // cout<<myStruct1.num<<endl;
    // cout<<myStruct2.name<<endl;
    // cout<<myStruct2.num<<endl;

   
}
