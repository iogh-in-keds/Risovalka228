//
// Created by kuznecovia.26 on 18.03.2022.
//

#include "MyCamera.h"

MyCamera::MyCamera() {
    position = {0, 0};
    rotation = {0, 0};
    cursX = 0;
    cursY = 0;
    mCamera.zoom = 1;
}

void MyCamera::update() {
    if (GetMousePosition().y <= 1) {
        mCamera.offset.y += 5;
        position.y += 5;
    }
    if (GetMousePosition().x <= 1) {
        mCamera.offset.x += 5;
        position.x += 5;
    }
    if (GetMousePosition().x >= 1919) {
        mCamera.offset.x -= 5;
        position.x -= 5;
    }
    if (GetMousePosition().y >= 1079) {
        mCamera.offset.y -= 5;
        position.y -= 5;
    }
}

Camera2D MyCamera::getCamera() {
    return mCamera;
}
