#include <iostream>
#include <thread>
#include <chrono>
#include "Effects.h"



using namespace std;


void TypeWriter(string textotype) {

    string s = textotype;

    for (const auto c : s) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    cout << endl;

}


