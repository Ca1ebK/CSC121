#include <iostream>
#include <cstdint>
#include <cstdlib>
#include <ctime>

int main()
{
    // Set a random seed each time the program is re-compiled
    srand(static_cast<unsigned>(time(nullptr)));

    // Prompt: generate an even random number between 10 and 20.
    uint64_t randInt = rand() % 6 * 2 + 10;
    std::cout << randInt << std::endl; // print out the random integer.

    return 0;
}