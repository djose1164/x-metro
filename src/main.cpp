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

	Model model = LoadModel("resources/sara_3d.obj");
	Texture2D texture = LoadTexture("resources/pepper_diff.png");
	model.materials->maps[MATERIAL_MAP_DIFFUSE].texture = texture;

	Train train{"Maglev", "maglev-like", 12.5, 15.3, 123.4, 1500};

	while (!WindowShouldClose())
	{
		BeginDrawing();
		ClearBackground(BLACK);
		DrawText(APP_NAME, 52, 80, 32, RED);

		Vector3 cubePosition = {-4.f, 0.f, 4.f};
		// TraceLog(LOG_INFO, "Camera position {%.3f:%.3f:%.3f}", camera_.position.x, camera_.position.y, camera_.position.z);
		BeginMode3D(camera.get_camera());
		DrawText("Jose Daniel", 100, 150, 36, RED);
		DrawModel(model, cubePosition, 4.0f, WHITE);
		DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON);
		DrawGrid(10, 1.0f);
		EndMode3D();

		DrawFPS(10, 10);
		EndDrawing();
	}
	return 0;
}
