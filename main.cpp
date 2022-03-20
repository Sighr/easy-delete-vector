#include <iostream>
#include "MyVector.h"
#include "ConstructingDebug.h"

void test1()
{
	MyVector<int> vector;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << i << std::boolalpha << vector.Insert(i).has_value() << std::endl;
	}
	std::cout << std::boolalpha << vector.Delete(4) << std::endl;
	std::cout << std::boolalpha << vector.Delete(4) << std::endl;
	std::cout << std::boolalpha << vector.Delete(20) << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << vector[0].value_or(-1) << std::endl;
	}
}

void test2()
{
	MyVector<ConstructingDebug> vector;
	
}

int main()
{
#   define REF(x) << #x " ?: " << x << '\n'
	std::cout << std::boolalpha
			  REF( (std::is_same_v<int, int>) )
			  REF( (std::is_same_v<int, int&>) )
			  REF( (std::is_same_v<int, std::remove_reference_t<int&>>) )
			  ;
#   undef REF
//	test1();
//	test2();
}
