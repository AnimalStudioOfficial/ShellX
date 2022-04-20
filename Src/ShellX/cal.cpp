#include <iostream>
#include <string>
#include "cal.h"

using namespace std;



void calfun() {

    int number1 = NULL;
    int number2 = NULL;
    char operater = NULL;

    cout << "Enter Number 1" << endl;
    cin >> number1;

    cout << "Enter Number 2" << endl;
    cin >> number2;

    cout << "Enter Operater" << endl;
    cin >> operater;

    switch (operater)
    {
    case '+':
        cout << number1 + number2 << endl;
    case '-':
        cout << number1 - number2 << endl;
    case '*':
        cout << number1 * number2 << endl;
    case '/':
        cout << number1 / number2 << endl;
    default:
        break;
    }

}