/*
Encapsulation in C++:
    
    *Bundling data and methods into a class, hiding internal details, and providing controlled access through public member functions.
    
    *Provides data protection, code organization, and information hiding, promoting modularity and maintaining the integrity of the class.

    --Getters, Setters

    

*/

#include<iostream>
using namespace std;

class Employee
{
    private:
    int salary;

    public:
    int getSalary()
    {
        return salary;
    }

    void setSalary(int value)
    {
        salary=value;
    }
};

int main()
{
    Employee e1;
    e1.setSalary(700);
    cout<<e1.getSalary()<<endl;
    
}