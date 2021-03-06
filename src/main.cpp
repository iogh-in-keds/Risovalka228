#include <string>

#include <raylib.h>

#define RAYGUI_IMPLEMENTATION

#include "extras/raygui.h"
#include <vector>
#include "Object.h"
#include "Point.h"
#include "MyCamera.h"
#include "Line.h"
#include "Circle.h"
#include <iostream>

int main() {
    InitWindow(1920, 1080, "risovalka");
//    ToggleFullscreen();
    SetTargetFPS(200);
    MyCamera camera;
    std::string mode = "p";
    bool is1PointPlaced = false;
    Point firstPointInObject = Point();
    std::vector<Object *> obj(0);
    while (!WindowShouldClose()) {
        if (IsKeyPressed(KEY_P)) {
            firstPointInObject = Point();
            is1PointPlaced = false;
            mode = "p";
        }
        if (IsKeyPressed(KEY_L)) {
            firstPointInObject = Point();
            is1PointPlaced = false;
            mode = "l";
        }
        if (IsKeyPressed(KEY_C)) {
            firstPointInObject = Point();
            is1PointPlaced = false;
            mode = "c";
        }
        if (mode == "p") {
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                Vector2 position = {float(GetMouseX()) - camera.position.x, float(GetMouseY()) - camera.position.y};
                Point *p = new Point(position);
                for (auto i : obj) {
                    for (auto j : obj) {
                        if (i->getType() == "l") {
                            if (j->getType() == "l") {
                                float x = (i->getB()*j->getC() - j->getB()*i->getC()) / (j->getB()*i->getA() - i->getB()*j->getA());
                                float y = (-i->getC() - i->getA()*x) / i->getB();
                                if (abs(x - position.x) + abs(y - position.y) <= 10) {
                                    p = new Point(x, y);
                                }
                            } else if (j->getType() == "c" && i->getB() != 0) {
                                float a1 = 1 + (i->getA() * i->getA()) / (i->getB() * i->getB());
                                float b1 = -2 * j->getPosition().x + (2 * i->getA() * i->getC()) / (i->getB() * i->getB()) +
                                        (2 * i->getA() * j->getPosition().y) / (i->getB());
                                float c1 = j->getPosition().x * j->getPosition().x + (i->getC() * i->getC()) / (i->getB() * i->getB()) +
                                        (2 * j->getPosition().y * i->getC()) / i->getB() + j->getPosition().y * j->getPosition().y - j->getR() * j->getR();
                                if (b1*b1 - 4*a1*c1 >= 0) {
                                    float x = (-b1 - sqrt(b1 * b1 - 4 * a1 * c1)) / (2 * a1);
                                    float y = (-i->getC() - i->getA() * x) / i->getB();
                                    if (abs(x - position.x) + abs(y - position.y) <= 10) {
                                        p = new Point(x, y);
                                    }
                                    x = (-b1 + sqrt(b1 * b1 - 4 * a1 * c1)) / (2 * a1);
                                    y = (-i->getC() - i->getA() * x) / i->getB();
                                    if (abs(x - position.x) + abs(y - position.y) <= 10) {
                                        p = new Point(x, y);
                                    }
                                }
                            }
                        } else if (i->getType() == "c") {
                            if (j->getType() == "c" && (i->getX() != j->getX() || i->getY() != j->getY())) {
                                float x1 = i->getX(), x2 = j->getX(), y1 = i->getY(), y2 = j->getY(), r1 = i->getR(), r2 = j->getR();
                                float d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
                                if (r1 + r2 >= d) {
                                    float b = (r2 * r2 - r1 * r1 + d * d) / (2 * d);
                                    float a = sqrt(r2 * r2 - b * b);
                                    float x = x2 + (b * (x1 - x2)) / d + (a * (y2 - y1)) / d, y =
                                            y2 + (b * (y1 - y2)) / d + (a * (x1 - x2)) / d;
                                    if (abs(x - position.x) + abs(y - position.y) <= 10) {
                                        p = new Point(x, y);
                                    }
                                    x = x2 + (b * (x1 - x2)) / d - (a * (y2 - y1)) / d, y = y2 + (b * (y1 - y2)) / d -
                                                                                            (a * (x1 - x2)) / d;
                                    if (abs(x - position.x) + abs(y - position.y) <= 10) {
                                        p = new Point(x, y);
                                    }
                                }
                            }
                        }
                    }
                }
                obj.push_back(p);
            }
        }
        if (mode == "l") {
            if (!is1PointPlaced && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                Vector2 position = {GetMouseX() - camera.position.x, GetMouseY() - camera.position.y};
                firstPointInObject = Point(position);
                for (Object *i : obj) {
                    if (i->getType() == "p" && abs(i->getX() - position.x) + abs(i->getY() - position.y) <= 10) {
                        firstPointInObject = Point(i->getPosition());
                    }
                }
                is1PointPlaced = true;
            } else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                Vector2 position = {GetMouseX() - camera.position.x, GetMouseY() - camera.position.y};
                Point *point = new Point(position), *p = new Point();
                *p = firstPointInObject;
                for (Object *i : obj) {
                    if (i->getType() == "p" && abs(i->getX() - position.x) + abs(i->getY() - position.y) <= 10) {
                        *point = Point(i->getPosition());
                    }
                }
                Line *l = new Line(firstPointInObject, *point, &camera);
                is1PointPlaced = false;
                firstPointInObject = Point();
                obj.push_back(l);
                obj.push_back(p);
                obj.push_back(point);
            }
        }
        if (mode == "c") {
            if (!is1PointPlaced && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                Vector2 position = {GetMouseX() - camera.position.x, GetMouseY() - camera.position.y};
                firstPointInObject = Point(position);
                for (Object *i : obj) {
                    if (i->getType() == "p" && abs(i->getX() - position.x) + abs(i->getY() - position.y) <= 10) {
                        firstPointInObject = Point(i->getPosition());
                    }
                }
                is1PointPlaced = true;
            } else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                Vector2 position = {GetMouseX() - camera.position.x, GetMouseY() - camera.position.y};
                Point *point = new Point(position), *p = new Point();
                *p = firstPointInObject;
                for (Object *i : obj) {
                    if (i->getType() == "p" && abs(i->getX() - position.x) + abs(i->getY() - position.y) <= 10) {
                        *point = Point(i->getPosition());
                    }
                }
                Circle *c = new Circle(firstPointInObject, *point);
                is1PointPlaced = false;
                firstPointInObject = Point();
                obj.push_back(c);
                obj.push_back(p);
                obj.push_back(point);
            }
        }
        camera.update();
        BeginDrawing();
        BeginMode2D(camera.getCamera());
        ClearBackground(RAYWHITE);
        if (is1PointPlaced) {
            firstPointInObject.draw();
        }
        for (int i = 0; i < obj.size(); i++) {
//            std::cout << "GOVNO\n";
            obj[i]->draw();
        }
        EndMode2D();
        EndDrawing();

    }

    CloseWindow();
    return 0;
}