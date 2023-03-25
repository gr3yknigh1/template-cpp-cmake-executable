#include "vectors/Vector2f.h"

Vector2f::Vector2f() : x(0), y(0)
{
}

Vector2f::Vector2f(float x, float y) : x(x), y(y)
{
}

Vector2f Vector2f::Add(const Vector2f &other) const
{
    return Vector2f(this->x + other.x, this->y + other.y);
}

Vector2f Vector2f::Scale(float scalar) const
{
    return Vector2f(this->x * scalar, this->y * scalar);
}

Vector2f Vector2f::Zero(void)
{
    return Vector2f();
}

std::ostream &operator<<(std::ostream &ostream, const Vector2f &vector)
{
    ostream << "[" << vector.x << ", " << vector.y << "]";
    return ostream;
}
