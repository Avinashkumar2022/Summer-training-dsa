#include <iostream>
using namespace std;

class Stack {
    int* arr;
    int top;
    int size;

public:
    Stack(int stackSize) { // Modified constructor to take stack size as a parameter
        size = stackSize;
        top = -1;
        arr = new int[size];
    }

    void push(int val) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack empty" << endl;
            return;
        }
        top--;
    }

    int Top() {
        if (top == -1) {
            cout << "Empty stack";
            return -1;
        }
        return arr[top];
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    int size, element;

    cout << "Enter the total number of letters in your name: ";
    cin >> size;

    Stack st(size); // Create stack with specified size

    cout << "Enter your name one letter at a time: ";
    for (int i = 0; i < size; i++) {
        cin >> element;
        st.push(element);
    }

    cout << "Your reversed name is: ";
    while (!st.empty()) {
        cout << st.Top() << " ";
        st.pop();
    }

    cout << endl;

    return 0;
}
