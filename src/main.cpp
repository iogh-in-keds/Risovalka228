#include <string>

#include <raylib.h>

#define RAYGUI_IMPLEMENTATION

#include "extras/raygui.h"
#include <vector>
#include "Object.h"
#include "Point.h"
#include "MyCamera.h"
#include "Line.h"

int main() {
    InitWindow(1920, 1080, "risovalka");
    ToggleFullscreen();
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
        if (mode == "p") {
            if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                Vector2 position = {GetMouseX() - camera.position.x, GetMouseY() - camera.position.y};
                Point *p = new Point(position);
                obj.push_back(p);
            }
        }
        if (mode == "l") {
            if (!is1PointPlaced && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                Vector2 position = {GetMouseX() - camera.position.x, GetMouseY() - camera.position.y};
                firstPointInObject = Point(position);
                is1PointPlaced = true;
            } else if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
                Vector2 position = {GetMouseX() - camera.position.x, GetMouseY() - camera.position.y};
                Point *point = new Point(position), *p = new Point();
                *p = firstPointInObject;
                Line *l = new Line(firstPointInObject, *point, &camera);
                is1PointPlaced = false;
                firstPointInObject = Point();
                obj.push_back(l);
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
            obj[i]->draw();
        }
        EndMode2D();
        EndDrawing();

    }

    CloseWindow();
    return 0;
}