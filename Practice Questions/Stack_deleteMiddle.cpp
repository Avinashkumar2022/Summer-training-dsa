#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle(stack<int> &inputStack,int size,int count)
{
    if(inputStack.empty() || count==(size/2)-1)
    {
        inputStack.pop();
        return;
    }
    int num=inputStack.top();
    inputStack.pop();

    return deleteMiddle(inputStack,size,count++);

    inputStack.push(num);
}

int main()
{

}