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
			
			Vector3 cubePosition = {10.f, 10.f, 10.f};
			//TraceLog(LOG_INFO, "Camera position {%.3f:%.3f:%.3f}", camera_.position.x, camera_.position.y, camera_.position.z);
			BeginMode3D(camera.get_camera());
				DrawText("Jose Daniel", 100, 150, 36, RED);
				DrawCube(cubePosition, 2.0f, 2.0f, 2.0f, RED);
				DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON);
				DrawGrid(10, 1.0f);
			EndMode3D();
					
			DrawFPS(10, 10);
		EndDrawing();
	}
	return 0;
}
