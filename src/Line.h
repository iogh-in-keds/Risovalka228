//
// Created by kuznecovia.26 on 21.04.2022.
//

#ifndef RAYLIBTEMPLATE_LINE_H
#define RAYLIBTEMPLATE_LINE_H

#include "Object.h"
#include "Point.h"

class Line : public Object {
public:
    explicit Line(Point p1, Point p2);
    explicit Line(Vector2 position1, Vector2 position2);
    explicit Line(float x1, float y1, float x2, float y2);
    explicit Line(float a, float b, float c);
    void draw() override;

private:
    float mA, mB, mC;
};


#endif //RAYLIBTEMPLATE_LINE_H
