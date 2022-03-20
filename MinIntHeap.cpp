//
// Created by alex on 16.03.2022.
//

#include <algorithm>
#include <functional>
#include "MinIntHeap.h"

void MinIntHeap::Push(int value)
{
	m_heap.push_back(value);
	std::push_heap(m_heap.begin(), m_heap.end(), std::greater<int>{});
}

int MinIntHeap::Pop()
{
	std::pop_heap(m_heap.begin(), m_heap.end(), std::greater<int>{});
	int value = m_heap.back();
	m_heap.pop_back();
	return value;
}

bool MinIntHeap::Empty()
{
	return m_heap.empty();
}
