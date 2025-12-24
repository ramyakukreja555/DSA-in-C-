// Your First C++ Program

#include <iostream>

int main()
{
    std::cout << "Hello Worldsssssssssssssssssss! \n";

    std::vector<int> numbers = {1, 2, 3, 4, 5};
    for (int number : numbers)
    {
        std::cout << number << " "; // Prints: 1 2 3 4 5
    }

    return 0;
}