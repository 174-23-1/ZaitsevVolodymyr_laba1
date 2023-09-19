#include <iostream>

int main()
{
    const char x{ -2 }, y{ -1 };
    const float z{ 1.9 };

    double result{ ((32.0 / x - 17.0 * y * 2 * z + 3 * z / 4) / (z - 1.67 * y) * z) * 0.02 };
    std::cout << "Result = " << result;
}