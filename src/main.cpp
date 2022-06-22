#include <iostream>
#include <raylib.h>

#define APP_NAME "X-Metro Simulator"

int main(void)
{
	constexpr unsigned width = 852;
	constexpr unsigned height = 480;
	
	InitWindow(width, height, APP_NAME);
	SetTargetFPS(60);
	
	while (!WindowShouldClose())
	{
		BeginDrawing();
			ClearBackground(BLACK);
			DrawText(APP_NAME, 52, 80, 32, RED);
		EndDrawing();
	}
	CloseWindow();
	return 0;
}
