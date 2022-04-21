//
// Created by kuznecovia.26 on 21.04.2022.
//

#include "Line.h"

Line::Line(Point p1, Point p2) {
    mA = p1.getY() - p2.getY();
    mB = p1.getX() - p2.getX();
    mC = -(p1.getX()*mA + p1.getY()*mB);
}

Line::Line(Vector2 p1, Vector2 p2) {
    mA = p1.y - p2.y;
    mB = p1.x - p2.x;
    mC = -(p1.x*mA + p1.y*mB);
}

Line::Line(float x1, float y1, float x2, float y2) {
    mA = y1 - y2;
    mB = x1 - x2;
    mC = -(x1*mA + y1*mB);
}

Line::Line(float a, float b, float c) {
    mA = a;
    mB = b;
    mC = c;
}

void Line::draw() {
    DrawLine(0, mC/mA, mC/mB, 0, BLACK);
}
