#include <string>

#include <raylib.h>

#define RAYGUI_IMPLEMENTATION

#include "extras/raygui.h"
#include <vector>
#include "Object.h"
#include "Point.h"
#include "MyCamera.h"

int main() {
    InitWindow(1920, 1080, "risovalka");
    ToggleFullscreen();
    SetTargetFPS(60);
    MyCamera camera;
    std::vector<Object *> obj(0);
    while (!WindowShouldClose()) {
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            Vector2 position = {GetMouseX() - camera.position.x, GetMouseY() - camera.position.y};
            Point *p = new Point(position);
            obj.push_back(p);
        }
        camera.update();
        BeginDrawing();
        BeginMode2D(camera.getCamera());
        ClearBackground(RAYWHITE);
        for (int i = 0; i < obj.size(); i++) {
            obj[i]->draw();
        }
        EndMode2D();
        EndDrawing();

    }

    CloseWindow();
    return 0;
}