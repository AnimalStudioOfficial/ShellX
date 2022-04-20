#include <iostream>
#include <thread>
#include <chrono>



static void TypeWriter(string textotype){

    std::string s = textotype;

    for (const auto c : s) {
        std::cout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    std::cout << std::endl;

}


