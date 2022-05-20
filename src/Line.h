//
// Created by kuznecovia.26 on 21.04.2022.
//

#ifndef RAYLIBTEMPLATE_LINE_H
#define RAYLIBTEMPLATE_LINE_H

#include "Object.h"
#include "Point.h"
#include "MyCamera.h"

class Line : public Object {
public:
    explicit Line(Point p1, Point p2, MyCamera *cam = 0);
    explicit Line(Vector2 position1, Vector2 position2, MyCamera *cam = 0);
    explicit Line(float x1, float y1, float x2, float y2, MyCamera *cam = 0);
    explicit Line(float a, float b, float c, MyCamera *cam = 0);
    void draw() override;
    float getA() override;
    float getB() override;
    float getC() override;

private:
    float mA, mB, mC;
    MyCamera *mCamera;
};


#endif //RAYLIBTEMPLATE_LINE_H
