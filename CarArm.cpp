#include <iostream>
#include "raylib.h"

#define WIDTH 1500
#define HEIGHT 1000


int main()
{
    InitWindow(WIDTH,HEIGHT, "Carrarmati");
    SetTargetFPS(60);

    while(!WindowShouldClose()){

        float dt = GetFrameTime();
        
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }
    CloseWindow();
}