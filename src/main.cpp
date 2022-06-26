#include <iostream>
#include "window.h"

#define APP_NAME "X-Metro Simulator"

int main(void)
{
	constexpr unsigned width = 852;
	constexpr unsigned height = 480;
	
	std::string title = APP_NAME;
	Window window(title);
	window.init();
	
	while (!WindowShouldClose())
	{
		BeginDrawing();
			ClearBackground(BLACK);
			DrawText(APP_NAME, 52, 80, 32, RED);
		EndDrawing();
	}
	return 0;
}
