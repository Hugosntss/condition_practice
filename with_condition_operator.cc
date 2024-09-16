#include <iostream>
using namespace std;

/*
This is the second way as cited in the readme.md

This program will check which value is larger and spill it out. 

This program uses ternary operators(condition operators)
*/


int main() {
    double value1, value2;

    cout << "Enter the first value: ";
    cin >> value1;
    cout << "Enter the second value: ";
    cin >> value2;

    double larger_value = (value1 > value2) ? value1 : value2;
    cout << "The larger value is: " << larger_value << endl;

    return 0;
}
