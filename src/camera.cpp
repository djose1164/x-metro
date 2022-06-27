#include "camera.h"
#include <iostream>

XM_Camera::XM_Camera() : pos{0, 10.f, 10.f}, target{0, 0, 0}, up{0, 1.f, 0}, fovy{45.f}
{
	camera_.position = pos;
	camera_.target = target;
	camera_.up = up;
	camera_.fovy = fovy;
	camera_.projection = CAMERA_PERSPECTIVE;
	
	std::cout << "\npos:{x:" << pos.x << ", y:" << pos.y << ", z:" << pos.z << "}"
			  << "\ntarget:{x:" << target.x << "y:" << target.y << ", z:" << target.z << "}"
			  << "\nup:{x:" << up.x << ", y:" << up.y << ", z:" << up.z << "}"
			  << "\nfoovy:" << fovy << std::endl;
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

Camera3D XM_Camera::get_camera() const
{
	return camera_;
}



void XM_Camera::draw(const void *todraw)
{
	Vector3 cubePosition = {10.f, 10.f, 10.f};
	TraceLog(LOG_INFO, "Camera position {%.3f:%.3f:%.3f}", camera_.position.x, camera_.position.y, camera_.position.z);
	BeginMode3D(camera_);
		DrawCube(cubePosition, 2.0f, 2.0f, 2.0f, RED);
		DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, MAROON);
		DrawGrid(10, 1.0f);
	EndMode3D();
}
	
XM_Camera::~XM_Camera()
{}
