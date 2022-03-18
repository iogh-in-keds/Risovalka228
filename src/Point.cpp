//
// Created by kuznecovia.26 on 11.03.2022.
//

#include "Point.h"

void Point::draw() {
    DrawCircleV(mPosition, 3, BLACK);
}

Point::Point(Vector2 position) : Object(position) {
    mPosition = position;
}

Point::Point(float x, float y) : Object(x, y) {
    mPosition.x = x;
    mPosition.y = y;
}
