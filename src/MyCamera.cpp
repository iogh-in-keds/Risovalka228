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
    if (GetMousePosition().y <= 1 || IsKeyDown(KEY_UP)) {
        mCamera.offset.y += 10;
        position.y += 10;
    }
    if (GetMousePosition().x <= 1 || IsKeyDown(KEY_LEFT)) {
        mCamera.offset.x += 10;
        position.x += 10;
    }
    if (GetMousePosition().x >= 1919 || IsKeyDown(KEY_RIGHT)) {
        mCamera.offset.x -= 10;
        position.x -= 10;
    }
    if (GetMousePosition().y >= 1079 || IsKeyDown(KEY_DOWN)) {
        mCamera.offset.y -= 10;
        position.y -= 10;
    }
}

Camera2D MyCamera::getCamera() {
    return mCamera;
}
