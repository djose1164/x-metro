#include "window.h"
#include <iostream>

Window::Window(const std::string& title) : title(title)
{
	width = 852;
	height = 480;
	FPS = 60;
	SetTargetFPS(60);
}

Window::Window(const std::string& title, const unsigned width, const unsigned height)
			  : title{title}, width{width}, height{height}
{
	SetTargetFPS(60);
}

void Window::init(void)
{
	InitWindow(width, height, title.c_str());
}

void Window::close(void)
{
	CloseWindow();
}

Window::~Window()
{
	std::cout << "Deleting window...\n";
	close();
	std::cout << "Deleting window... Done!\n";
}
