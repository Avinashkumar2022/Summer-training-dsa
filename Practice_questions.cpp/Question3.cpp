//WAP to define two functions to print the max and min number respectively among three numbers entered by the user.

#include <iostream>
using namespace std;

int maximum(int x, int y, int z) 
{
    int maxNum = x;
    if (y > maxNum)
        maxNum = y;
    if (z > maxNum)
        maxNum = z;
    return maxNum;
}

int minimum(int x, int y, int z) 
{
    int minNum = x;
    if (y < minNum)
        minNum = y;
    if (z < minNum)
        minNum = z;
    return minNum;
}

int main() 
{

    int numbers[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> numbers[i];
    }

    int num1 = numbers[0], num2 = numbers[1], num3 = numbers[2];

    int maxNum = maximum(num1, num2, num3);
    int minNum = minimum(num1, num2, num3);

    cout << "Maximum number: " << maxNum << endl;
    cout << "Minimum number: " << minNum << endl;

    return 0;
}
