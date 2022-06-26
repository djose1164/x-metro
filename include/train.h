#include <iostream>

class Train
{
private:
	const std::string name;
	const std::string type;
	const unsigned width;
	const unsigned height;
	const unsigned lenght;
	const unsigned horsepower;
	
public:
	Train(const std::string &name);
	Train(const std::string &name, const std::string &type);
	Train(const std::string &name, const std::string &type, const unsigned width);
	Train(const std::string &name, const std::string &type, 
		  const unsigned width, const unsigned height);
	Train(const std::string &name, const std::string &type, 
		  const unsigned width, const unsigned height, const unsigned lenght);
	Train(const std::string &name, const std::string &type, 
		  const unsigned width, const unsigned height, const unsigned lenght,
		  const unsigned horsepower);
	~Train();
};
