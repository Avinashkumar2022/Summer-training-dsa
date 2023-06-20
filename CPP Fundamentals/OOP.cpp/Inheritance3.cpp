#include<iostream>
using namespace std;

//Multilevel Inheritance- When there is a child class deriving from a Parent class and then another class is deriving form the child class.

class Animal
{
    public:
    void eat()
    {
        cout<<"Eating "<<endl;
    }
};

class Dog :public Animal
{
    public:
    void bark()
    {
        cout<<"Bark "<<endl;
    }
};

class BabyDog:public Dog
{
    public:
    void weep()
    {
        cout<<"Weeping "<<endl;
    }
};

int main()
{
    BabyDog bd1;
    bd1.bark();
    bd1.eat();
    bd1.weep();

    Dog d1;
    d1.bark();
    d1.eat();
}