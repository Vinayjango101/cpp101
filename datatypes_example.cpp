#include <iostream>
#include <string>

using namespace std;


int main()
{
    string name;
    int no_of_items;
    double cost_per_item;
    double total_cost;
    char currency;

    cout << "ENTER NAME: ";
    cin  >> name;

    cout << "ENTER NO OF ITEMS: ";
    cin >> no_of_items;

    cout << "ENTER COST PER ITEM: ";
    cin  >> cost_per_item;

    cout << "ENTER TOTAL COST: ";
    cin  >> total_cost;

    cout << "ENTER CURRENCY: ";
    cin  >> currency;

    // DISPLAY ALL THE INFO NOW

    cout << "NAME: " << name << endl;
    cout << "NO OF ITEMS: " << no_of_items << endl;
    cout << "COST PER ITEM: " << cost_per_item << endl;
    cout << "TOTAL COST: " << total_cost << endl;
    cout << "CURRENCY: " << currency << endl;
    return 0;

}