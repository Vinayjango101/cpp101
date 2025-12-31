#include <iostream>

#include <string> // Include the string library
using namespace std;

int main()
{
    string greeting = "Hello!";
    cout << greeting << endl;

    // Example usage of string.

    string name;
    string greet_user = "Nice name!, have a great day!.";
    cout << "ENTER YOUR NAME: ";
    cin >> name;
    cout << name + " " +  greet_user << endl;

}