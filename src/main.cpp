#include <string>

#include <raylib.h>

#define RAYGUI_IMPLEMENTATION

#include "extras/raygui.h"
#include <vector>
#include "Object.h"
#include "Point.h"

int main() {
    InitWindow(1920, 1080, "risovalka");
    SetTargetFPS(60);
    std::vector<Object*> obj(0);
    while (!WindowShouldClose()) {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            Point* p = new Point(GetMousePosition());
            obj.push_back(p);
        }
        BeginDrawing();
        ClearBackground(RAYWHITE);
        for (int i = 0; i < obj.size(); i++) {
            obj[i]->draw();
        }
        EndDrawing();

    }

    CloseWindow();
    return 0;
}