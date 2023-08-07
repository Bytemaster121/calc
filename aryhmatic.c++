#include <iostream>
using namespace std;

int main() {
    
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    char o_p;
    cout << "Enter the operator (+, -, *, /): " << endl;
    cin >> o_p;


    switch (o_p) {
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout << "Divide by zero situation" << endl;
            }
            break;
        default:
            cout << "Invalid operator: " << o_p << endl;
    }

    return 0;
}
