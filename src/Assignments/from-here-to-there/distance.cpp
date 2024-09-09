#include <iostream>
#include <cmath>

int main()
{
    double x1;
    double y1;

    double x2;
    double y2;

    double distance;

    std::cout << "\nWelcome to the 2D Distance Program!\n" << std::endl;

    std::cout << "What is the first point in the plane?" << std::endl;

    std::cin >> x1 >> y1;

    std::cout << "\nWhat is the second point in the plane?" << std::endl;

    std::cin >> x2 >> y2;

    std::cout << std::endl << "Calculating the distance now...\n" << std::endl;

    distance = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));

    std::cout << "The midpoint of the line segment between (" << x1 << ", " << y1 << ")"
            " and (" << x2 << ", " << y2 << ") is " << distance << ".\n" << std::endl;

    std::cout << "Thank you for using the 2D Distance Program.\n" << std::endl;

    return 0;
}