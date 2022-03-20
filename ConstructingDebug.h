//
// Created by alex on 18.03.2022.
//

#ifndef SPHERES_CONSTRUCTINGDEBUG_H
#define SPHERES_CONSTRUCTINGDEBUG_H


#include <iostream>

class ConstructingDebug
{
	ConstructingDebug()
	{
		std::cout << "ConstructingDebug: constructor" << std::endl;
	}
	
	ConstructingDebug(int a, int b)
	{
		std::cout << "ConstructingDebug: constructor with parameters" << std::endl;
	}
	
	ConstructingDebug(const ConstructingDebug& other)
	{
		std::cout << "ConstructingDebug: constructor copy" << std::endl;
	}
	
	ConstructingDebug(ConstructingDebug&& other) noexcept
	{
		std::cout << "ConstructingDebug: constructor move" << std::endl;
	}
	
	ConstructingDebug& operator= (const ConstructingDebug& other)
	{
		std::cout << "ConstructingDebug: assignment copy" << std::endl;
		return *this;
	}
	
	ConstructingDebug& operator= (ConstructingDebug&& other) noexcept
	{
		std::cout << "ConstructingDebug: assignment move" << std::endl;
		return *this;
	}
};


#endif //SPHERES_CONSTRUCTINGDEBUG_H
