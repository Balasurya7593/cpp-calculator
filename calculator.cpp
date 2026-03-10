#include <iostream>
using namespace std;

int main() {

    float num1, num2;
    int choice;

    cout << "Simple Calculator\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    if(choice == 1)
        cout << "Result: " << num1 + num2;

    else if(choice == 2)
        cout << "Result: " << num1 - num2;

    else if(choice == 3)
        cout << "Result: " << num1 * num2;

    else if(choice == 4)
        cout << "Result: " << num1 / num2;

    else
        cout << "Invalid choice";

    return 0;
}