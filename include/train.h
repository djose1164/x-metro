#pragma once
#include <iostream>
#include <raylib.h>

class Train
{
private:
	const std::string name;
	const std::string type;
	
	const double width;
	const double height;
	const double lenght;
	const unsigned horsepower;
	
	double distance;
	double time;
	Vector3 pos;
	
public:
	Train(const std::string &name, const std::string &type, 
		  const double width, const double height, const double lenght,
		  const unsigned horsepower);
	~Train();
};
