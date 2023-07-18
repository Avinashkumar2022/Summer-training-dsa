#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(5);

    cout<<"Top element in stack is : "<<myStack.top()<<endl;
    cout<<"Size of the stack before pop is: "<<myStack.size()<<endl;

    myStack.pop();

    cout<<"Top element in stack after pop is : "<<myStack.top()<<endl;

    myStack.empty();

    cout<<"Size of the stack after empty is: "<<myStack.size()<<endl;
}