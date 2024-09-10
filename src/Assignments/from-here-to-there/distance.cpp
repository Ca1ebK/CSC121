#include <iostream>
#include <cmath>

int main()
{

    std::cout << "\nWelcome to the 2D Distance Program!\n" << std::endl;

    std::cout << "Do you want to calculate a distance in 2 or 3 dimensions?" << std::endl;

    int numDimensions = 0;
    std::cin >> numDimensions;

    double x1 = 0.0;
    double y1 = 0.0;
    double z1 = 0.0;

    double x2 = 0.0;
    double y2 = 0.0;
    double z2 = 0.0;

    double distance = 0.0;

    if (numDimensions == 2)
    {
        std::cout << "What is the first point in the plane?" << std::endl;

        std::cin >> x1 >> y1;

        std::cout << "\nWhat is the second point in the plane?" << std::endl;

        std::cin >> x2 >> y2;

        std::cout << std::endl << "Calculating the distance now...\n" << std::endl;

        distance = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));

        std::cout << "The distance between (" << x1 << ", " << y1 << ")"
            " and (" << x2 << ", " << y2 << ") is " << distance << ".\n" << std::endl;
    }
    else if (numDimensions == 3)
    {
        std::cout << "What is the first point in the plane?" << std::endl;

        std::cin >> x1 >> y1 >> z1;

        std::cout << "\nWhat is the second point in the plane?" << std::endl;

        std::cin >> x2 >> y2 >> z2;

        std::cout << std::endl << "Calculating the distance now...\n" << std::endl;

        distance = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0) + pow(z2 - z1, 2.0));

        std::cout << "The distance between (" << x1 << ", " << y1 << ", " << z1 << ")"
            " and (" << x2 << ", " << y2 << ", " << z2 << ") is " << distance << ".\n" << std::endl;
    }

    std::cout << "Thank you for using the Distance Program.\n" << std::endl;

    return 0;
}