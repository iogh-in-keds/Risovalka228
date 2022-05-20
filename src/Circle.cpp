//
// Created by kuznecovia.26 on 13.05.2022.
//

#include <cmath>
#include "Circle.h"

Circle::Circle(Point o, Point a) {
    mPosition = o.getPosition();
    mR = sqrt((o.getX() - a.getX())*(o.getX() - a.getX()) + (o.getY() - a.getY())*(o.getY() - a.getY()));
    mType = "c";
}
Circle::Circle(Point o, float r) {
    mPosition = o.getPosition();
    mR = r;
    mType = "c";
}

void Circle::draw() {
    DrawCircleLines(mPosition.x, mPosition.y, mR, BLACK);
    DrawCircleLines(mPosition.x, mPosition.y, mR + 0.5, BLACK);
    DrawCircleLines(mPosition.x, mPosition.y, mR + 1, BLACK);
}

float Circle::getR() {
    return mR;
}
