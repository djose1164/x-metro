#include "train.h"
#include <iostream>

Train::Train(const std::string &name) : name{name}
{}
Train::Train(const std::string &name, const std::string &type) : name{name}, type{type}
{}

Train::Train(const std::string &name, const std::string &type, const unsigned width)
	   : name{name}, type{type}, width{width}
{}

Train::~Train()
{
	std::cout << "Train deleted!";
}
