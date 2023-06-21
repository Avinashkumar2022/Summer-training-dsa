#include<iostream>
using namespace std;

//MULTIPLE INHERITANCE is the process of deriving more than one class into a single class. Multiple parents and single child

class Animal
{
    public:
    void eat()
    {
        cout<<"Eating "<<endl;
    }

    void walk()
    {
        cout<<"Animal Walking "<<endl;
    }

};

class Bird
{
    public:
    void wings()
    {
        cout<<"Wings "<<endl;
    }

    void walk()
    {
        cout<<"Birds Walking"<<endl;
    }
};

class Penguin:public Animal,public Bird
{
    void movement()
    {
        Animal::walk();
    }
};

int main()
{
    Penguin p1;
    p1.eat();
    p1.Animal::walk();
    p1.wings();
}