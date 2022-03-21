//
// Created by alex on 18.03.2022.
//

#ifndef SPHERES_CONSTRUCTINGDEBUG_H
#define SPHERES_CONSTRUCTINGDEBUG_H


#include <iostream>

class ConstructingDebug
{
public:
	ConstructingDebug()
	{
		std::cout << "ConstructingDebug: constructor" << std::endl;
		value = -1;
	}
	
	explicit ConstructingDebug(int _value)
	{
		value = _value;
		std::cout << "ConstructingDebug: constructor with parameter " << value << std::endl;
	}
	
	ConstructingDebug(const ConstructingDebug& other)
	{
		value = other.value;
		std::cout << "ConstructingDebug: constructor copy " << value << std::endl;
	}
	
	ConstructingDebug(ConstructingDebug&& other) noexcept
	{
		value = other.value;
		other.value = 0;
		std::cout << "ConstructingDebug: constructor move " << value << std::endl;
	}
	
	ConstructingDebug& operator= (const ConstructingDebug& other) = delete;
	
	ConstructingDebug& operator= (ConstructingDebug&& other) = delete;
private:
	int value;
};


#endif //SPHERES_CONSTRUCTINGDEBUG_H
