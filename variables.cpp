// C++ Variables
// Variables are containers for storing data values.
//
// In C++, there are different types of variables (defined with different keywords), for example:
//
// int - stores integers (whole numbers), without decimals, such as 123 or -123
// double - stores floating point numbers, with decimals, such as 19.99 or -19.99
// char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
// string - stores text, such as "Hello World". String values are surrounded by double quotes
// bool - stores values with two states: true or false

// Declaring (Creating) Variables

// To create a variable, specify the type and assign it a value:

// Syntax :-
// type variablename = value;

#include <iostream>
using namespace std;
int main()
{
    // for example:-
    int x = 10; // created a variable of type INTEGER named "x" and assigned a value to it "10".

    // We can also create a variable without assigning a value to it and do it later:-

    int myNum;  // just declared a variable named myNum of type INTEGER.

    myNum = 100; // now assigned a value to it of "100".

    cout << myNum << endl; // printing the myNum variable value i.e 100.

    // Changing variable values:-

    // Note that if we assign a new value to an existing variable, it will overwrite the previous value:-

    myNum = 200; // Now the value of variable myNum is "200" instead of "100"

    cout << myNum << endl; // printing the new value assigned to this variable i.e "200"

    //
    // Other Types
    // A demonstration of other data types:

//    Example
    int myInt = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    cout << myInt << endl;
    cout << myFloatNum << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;

    // Display Variables:-

    int myAge = 18;
    cout << "I am " << myAge << " years old." <<endl; // prints "I am 18 years old."


    // We can also combine different types:-

    string fname = "vinay";
    string lname = "jangam";
    int age = 18;
    double height = 5.5;

    cout << "My name is " << fname << lname << " , i am " << age << " years old! and my height is "  << height << endl;
    // the above line of code prints - " My name is vinayjangam , i am 18 years old! and my height is 5.5'

    // Adding Variables Together:-
    // To add a variable to another variable, we can use the + operator:-

    int q = 5;
    int w = 6;
    int sum = q + w;
    cout << sum << endl;

}


