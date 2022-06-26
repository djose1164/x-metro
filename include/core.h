#pragma once
#include <string>
#include <raylib.h>

class Window
{
private:
	unsigned width;
	unsigned height;
	std::string title;
	unsigned FPS;
	
public:
	Window(const std::string& title);
	Window(const std::string& title, const unsigned width, const unsigned height);
	void init(void);
	void close(void);
	void set_fps(const unsigned fps);
	unsigned get_fps(void) const;
	~Window();
};
