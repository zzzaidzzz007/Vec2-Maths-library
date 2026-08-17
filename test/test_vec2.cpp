#include<iostream>
#include "vec2.hpp"

int main()
{
    Vec2 v1 = {3.0f,4.0f};
    Vec2 v2 = {5.0f,2.0f};

    std::cout << "Dot product of v1 and v2 is: " << dot(v1,v2);
    return 0;
}