//
// Created by kuznecovia.26 on 11.03.2022.
//

#ifndef RAYLIBTEMPLATE_POINT_H
#define RAYLIBTEMPLATE_POINT_H

#include "Object.h"

class Point : public Object {
public:
    explicit Point(Vector2 position);
    explicit Point(float x = 0, float y = 0);
    void draw() override;
};


#endif //RAYLIBTEMPLATE_POINT_H
