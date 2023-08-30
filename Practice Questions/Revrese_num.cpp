#include <iostream>
using namespace std;

int main() {
    int originalNumber, reversedNumber = 0;

    cout << "Enter a number: ";
    cin >> originalNumber;

    while (originalNumber != 0) {
        int lastDigit = originalNumber % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        originalNumber /= 10;
    }

    cout << "Reversed number: " << reversedNumber;

    return 0;
}
