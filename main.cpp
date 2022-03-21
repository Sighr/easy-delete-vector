#include <iostream>
#include "MyVector.h"
#include "ConstructingDebug.h"

void test1()
{
	MyVector<int> vector;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << i << vector.Insert(i) << std::endl;
	}
	std::cout << std::boolalpha << vector.Delete(4) << std::endl;
	std::cout << std::boolalpha << vector.Delete(4) << std::endl;
	std::cout << std::boolalpha << vector.Delete(20) << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << vector[i].value_or(-1) << std::endl;
	}
}

void test2()
{
	MyVector<ConstructingDebug> vector;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << i << vector.Insert(ConstructingDebug(i)) << std::endl;
	}
	std::cout << std::boolalpha << vector.Delete(4) << std::endl;
	std::cout << std::boolalpha << vector.Delete(8) << std::endl;
	std::cout << std::boolalpha << vector.Delete(1) << std::endl;
	std::cout << std::boolalpha << vector.Delete(2) << std::endl;
	std::cout << std::boolalpha << vector.Delete(6) << std::endl;
	
	for (int i = 10; i < 20; ++i)
	{
		std::cout << i << vector.Insert(ConstructingDebug(i)) << std::endl;
	}
	
	{
		ConstructingDebug tempLvalue;
		std::cout << vector.Insert(tempLvalue) << std::endl;
	}
}

int main()
{
	test1();
	test2();
}
