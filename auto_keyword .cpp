#include <iostream>

using namespace std;

int main()
{
    // The auto Keyword
    // The auto keyword automatically detects the type of a variable based on the value you assign to it.
    // It helps you write cleaner code and avoid repeating types, especially for long or complex types.
    // For example: Instead of writing int x = 5;, you can write:

    auto x = 5; // x is automatically treated as int
    cout << x << endl;

    auto msg = "hello this is a test message"; // msg is automatically treated as a string.
    cout << msg << endl;

}