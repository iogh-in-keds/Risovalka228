//
// Created by kuznecovia.26 on 11.03.2022.
//

#include "Object.h"

float Object::getX() {
    return mPosition.x;
}

float Object::getY() {
    return mPosition.y;
}

Vector2 Object::getPosition() {
    return mPosition;
}

Object::Object(Vector2 position) {
    mPosition = position;
}

Object::Object(float x, float y) {
    mPosition.x = x;
    mPosition.y = y;
}

std::string Object::getType() {
    return mType;
}
