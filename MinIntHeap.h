//
// Created by alex on 16.03.2022.
//

#ifndef SPHERES_MININTHEAP_H
#define SPHERES_MININTHEAP_H


#include <vector>

class MinIntHeap
{
public:
	void Push(int value);
	int Pop();
	bool Empty();
private:
	std::vector<int> m_heap;
};


#endif //SPHERES_MININTHEAP_H
