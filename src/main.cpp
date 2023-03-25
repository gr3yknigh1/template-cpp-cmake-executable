#include <iostream>

#include "vectors/Vector2f.h"

int main()
{
    std::cout << "Hi hi there!\n";

    Vector2f a(3, 10);
    Vector2f b(1, 9);

    std::cout << "A     = " << a << '\n';
    std::cout << "B     = " << b << '\n';
    std::cout << "A + B = " << a.Add(b) << '\n';

    return 0;
}
