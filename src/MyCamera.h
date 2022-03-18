//
// Created by kuznecovia.26 on 18.03.2022.
//

#ifndef RAYLIBTEMPLATE_MYCAMERA_H
#define RAYLIBTEMPLATE_MYCAMERA_H

#include <raylib.h>


class MyCamera {
public:
    MyCamera();
    void update();
    Camera2D getCamera();
    Vector2 position, rotation;
private:
    Camera2D mCamera;
    float cursX, cursY;
};


#endif //RAYLIBTEMPLATE_MYCAMERA_H
