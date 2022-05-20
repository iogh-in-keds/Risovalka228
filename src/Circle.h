//
// Created by kuznecovia.26 on 13.05.2022.
//

#ifndef RAYLIBTEMPLATE_CIRCLE_H
#define RAYLIBTEMPLATE_CIRCLE_H

#include "Object.h"
#include "Point.h"

class Circle : public Object {
public:
    Circle(Point o, Point a);
    Circle(Point o, float r);
    void draw() override;
    float getR() override;
private:
    float mR;
};


#endif //RAYLIBTEMPLATE_CIRCLE_H
