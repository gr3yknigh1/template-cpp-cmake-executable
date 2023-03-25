#ifndef VECTOR2F_H_
#define VECTOR2F_H_

#include <iostream>

struct Vector2f
{
    float x, y;

    Vector2f();
    Vector2f(float x, float y);

    Vector2f Add(const Vector2f &other) const;
    Vector2f Scale(float scalar) const;

    friend std::ostream &operator<<(std::ostream &ostream,
                                    const Vector2f &vector);

    static Vector2f Zero(void);
};

#endif // VECTOR2F_H_
