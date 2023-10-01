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


#include<iostream>
using namespace std;
int main()
{
    int given, set,reset,set_ans,reset_ans;
    given = 35;
    set = 16;
    reset = 31;
    set_ans = given | set;
    reset_ans = reset & given;
    cout<<"set:"<<set_ans<<endl;
    cout<<"reset:"<<reset_ans<<endl;

    /*
    OUTPUT
    set:51
    reset:3
    */

/*Exp_4 = Part B*/
 int i = 67;
    int r,l;
    cout<<"l="<<(i<<3)<<endl;
    cout<<"r="<<(i>>4)<<endl;

/*
OUTPUT
l=536
r=4*/


int bit_to_be_set,bit_to_be_reset,a1,a2;
    int a = 50;
    cout<<"Enter the bit to be reset:"<<endl;
    cin>>bit_to_be_reset;
    cout<<"Enter the bit to be set:"<<endl;
    cin>>bit_to_be_set;
    a1 = a|(1<<bit_to_be_reset);
    a2 = a|(1<<bit_to_be_set);
    cout<<a1<<endl;
    cout<<a2<<endl;
    return 0;

/*OUTPUT
Enter the bit to be reset:
1
Enter the bit to be set:
6
50
114*/
}
