#include <iostream>
#include <stdlib.h>

int main()
{    
    // Prompt: generate a random number between 1 and 10.
    uint64_t randInt = rand() % 10 + 1;
    std::cout << randInt << std::endl;
}