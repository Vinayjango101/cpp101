#include <iostream>
using namespace std;

// Constants
// When you do not want others (or yourself) to change existing variable values, use the const keyword (this will declare the variable as "constant", which means unchangeable and read-only):

int main()
{
    const int myNum = 15; // myNum will always be 15
    // we cannot overwrite its value by assigning it a different value later as it's a read-only variable.

    // we should always declare the variable as constant when we have values that are unlikely to change:

    const int minutesPerHour = 60;

    const int HoursPerDay = 24;


    cout << "There are " << minutesPerHour << " minutes per Hour. " << endl;

    cout << "There are " << HoursPerDay << " hours per Day. " << endl;

    cout << "BYE :D" << endl;

    // We must also assign the value for a const right away as we cannot assign its value later !




}