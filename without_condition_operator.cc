#include <iostream>
using namespace std;

/*
This program uses the first way to achieve the large value,
as cited in the readme.md

This program only uses if statemets, no ternary operators(condition operators)
*/


int main() {
    double value1, value2;
    double larger_value;

    cout << "Enter the first value: ";
    cin >> value1;
    cout << "Enter the second value: ";
    cin >> value2;

    if (value1 > value2) {
        larger_value = value1;
    } else {
        larger_value = value2;
    }

    cout << "The larger value is: " << larger_value << endl;

    return 0;
}
