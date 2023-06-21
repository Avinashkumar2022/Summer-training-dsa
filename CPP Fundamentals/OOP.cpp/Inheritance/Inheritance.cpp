#include<iostream>
using namespace std;

class Animal
{
    public:
    void eat()
    {
        cout<<"Eating  "<<endl;

    }
};

class Dog : public Animal{
    public:
    void bark()
    {
        cout<<"Barking "<<endl;
    }
};

class Snake : public Animal{
    public:
    void hiss(){
        cout<<"Hiss "<<endl;
    }
};
int main()
{
    Dog dog1;
    Snake snake1;
    dog1.eat();
    dog1.bark();
    
    snake1.eat();
    snake1.hiss();

}

/* 

* Types of inheritence-
-Single
-Multilevel
-Multiple
-Hierarchical
-Hybrid

*/