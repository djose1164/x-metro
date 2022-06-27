#pragma once
#include <raylib.h>


enum class XM_CameraMode
{
	PERSPECTIVE
};

class XM_Camera
{
private:
	Camera3D camera_;
	Vector3 pos;
	Vector3 target;
	Vector3 up;
	double fovy;

public:
	XM_Camera();
	XM_Camera(const Vector3 &pos);
	XM_Camera(const Vector3 &pos, const Vector3 &target);
	XM_Camera(const Vector3 &pos, const Vector3 &target, const Vector3 &up);
	XM_Camera(const Vector3 &pos, const Vector3 &target, const Vector3 &up, const double flovy);
	void draw(const void *todraw);
	~XM_Camera();
};
