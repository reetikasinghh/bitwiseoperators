#include<iostream>
using namespace std;
int main()
{
    int number1, number2, var1, var2;

    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> number1;

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> number2;

    // Calculate the bitwise AND of number1 and number2
    var1 = number1 & number2;

    // Calculate the bitwise OR of number1 and number2
    var2 = number1 | number2;

    // Display the result of the bitwise AND operation
    cout << "Bitwise AND: " << var1 << endl;

    // Display the result of the bitwise OR operation
    cout << "Bitwise OR: " << var2 << endl;

    return 0;
}
/*enter the first number: 23
enter the second number: 56
and: 16
or: 63*/
