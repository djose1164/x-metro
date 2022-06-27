#include <iostream>
#include "window.h"
#include "train.h"
#include "camera.h"

#define APP_NAME "X-Metro Simulator"

int main(void)
{
	constexpr unsigned width = 852;
	constexpr unsigned height = 480;
	
	std::string title = APP_NAME;
	Window window(title);
	window.init();
	XM_Camera camera;
	
	Train train{"Maglev", "maglev-like", 12.5, 15.3, 123.4, 1500};
	
	while (!WindowShouldClose())
	{
		BeginDrawing();
			ClearBackground(BLACK);
			DrawText(APP_NAME, 52, 80, 32, RED);
			camera.draw(nullptr);
			DrawFPS(10, 10);
		EndDrawing();
	}
	return 0;
}
