#include "train.h"
#include <iostream>


Train::Train(const std::string &name, const std::string &type, 
		  const double width, const double height, const double lenght,
		  const unsigned horsepower) : name{name}, type{type}, width{width},
			 height{height}, lenght{lenght}, horsepower{horsepower}, time{0},
			 distance{0}
{
	pos = {0, 0, 0};
}

Train::~Train()
{
	std::cout << "Train deleted!";
}
