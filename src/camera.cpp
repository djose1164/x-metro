#include "camera.h"

XM_Camera::XM_Camera() : pos{0, 0, 0}, target{0, 1.f, 0}, up{0, 1.f, 0}, fovy{45.f}
{
	camera_.position = pos;
	camera_.target = target;
	camera_.up = up;
	cmaera_.fovy = fovy;
	cmaera_.projection = CAMERA_PERSPECTIVE;
}

XM_Camera::XM_Camera(const Vector3 &pos) : pos{pos}, target{0, 1.f, 0}, up{0, 1.f, 0}, 
		   fovy{45.f}
{}

XM_Camera::XM_Camera(const Vector3 &pos, const Vector3 &target) : pos{pos}, target{target}, up{0, 1.f, 0}, 
		   fovy{45.f}
{}

XM_Camera::XM_Camera(const Vector3 &pos, const Vector3 &target, const Vector3 &up) : pos{pos}, target{target}, up{up}, 
		   fovy{45.f}
{}

XM_Camera::XM_Camera(const Vector3 &pos, const Vector3 &target, const Vector3 &up, const double flovy) : pos{pos}, target{target}, up{up}, 
		   fovy{fovy}
{}

inline void draw(const void *todraw)
{
	BeginMode3D(camera_);
		DrawCube(cubePosition, 2.0f, 2.0f, 2.0f, RED);
		DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON);
		DrawGrid(10, 1.0f);
	EndMode3D;
}
	
XM_Camera::~XM_Camera()
{}
