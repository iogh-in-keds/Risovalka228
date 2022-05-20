//
// Created by kuznecovia.26 on 11.03.2022.
//

#ifndef RAYLIBTEMPLATE_OBJECT_H
#define RAYLIBTEMPLATE_OBJECT_H


#include <string>

#include <raylib.h>

class Object {
public:
    explicit Object(Vector2 position);
    explicit Object(float x = 0, float y = 0);
    float getX();
    float getY();
    Vector2 getPosition();
    std::string getType();
    virtual void draw() = 0;
    virtual float getA() {return 0;}
    virtual float getB() {return 0;}
    virtual float getC() {return 0;}
    virtual float getR() {return 0;}

protected:
    Vector2 mPosition;
    std::string mType;
};


#endif //RAYLIBTEMPLATE_OBJECT_H
