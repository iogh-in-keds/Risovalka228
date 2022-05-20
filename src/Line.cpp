//
// Created by kuznecovia.26 on 21.04.2022.
//

#include "Line.h"

Line::Line(Point p1, Point p2, MyCamera *cam) {
    mA = -(p1.getY() - p2.getY());
    mB = p1.getX() - p2.getX();
    mC = -(p1.getX()*mA + p1.getY()*mB);
    mCamera = cam;
    mType = "l";
}

Line::Line(Vector2 p1, Vector2 p2, MyCamera *cam) {
    mA = -(p1.y - p2.y);
    mB = p1.x - p2.x;
    mC = -(p1.x*mA + p1.y*mB);
    mCamera = cam;
    mType = "l";
}

Line::Line(float x1, float y1, float x2, float y2, MyCamera *cam) {
    mA = -(y1 - y2);
    mB = x1 - x2;
    mC = -(x1*mA + y1*mB);
    mCamera = cam;
    mType = "l";
}

Line::Line(float a, float b, float c, MyCamera *cam) {
    mA = a;
    mB = b;
    mC = c;
    mCamera = cam;
    mType = "l";
}

void Line::draw() {
    DrawLineEx({-mCamera->position.x, -(-mA * mCamera->position.x + mC) / mB},
               {1920 - mCamera->position.x, -(mA * (1920 - mCamera->position.x) + mC) / mB}, 2 , BLACK);
}
