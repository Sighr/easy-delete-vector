//
// Created by alex on 16.03.2022.
//

#ifndef SPHERES_MYVECTOR_H
#define SPHERES_MYVECTOR_H

#include <concepts>
#include <optional>
#include <vector>
#include "MinIntHeap.h"

template <typename Value>
class MyVector
{
public:
	
	template <typename T> requires (std::is_same_v<Value, std::decay_t<T>>)
	int Insert(T&& value);
	bool Delete(int index);
	std::optional<Value> operator[](int index);
private:
	std::vector<std::optional<Value>> m_vector;
	MinIntHeap m_deletedIndices;
};

// perfect forwarding
template <typename Value>
template <typename T>
	requires (std::is_same_v<Value, std::decay_t<T>>)
int MyVector<Value>::Insert(T&& value)
{
	if (m_deletedIndices.Empty())
	{
		m_vector.emplace_back(std::forward<Value>(value));
		return m_vector.size() - 1;
	}

	int indexToInsert = m_deletedIndices.Pop();
	m_vector[indexToInsert].emplace(std::forward<Value>(value));
	return indexToInsert;
}

template <typename Value>
bool MyVector<Value>::Delete(int index)
{
	if (index >= m_vector.size())
		return false;
	if (!m_vector[index].has_value())
		return false;
	m_vector[index].reset();
	m_deletedIndices.Push(index);
	return true;
}

template <typename Value>
std::optional<Value> MyVector<Value>::operator[](int index)
{
	if (index >= m_vector.size())
		return std::optional<Value>();
	return m_vector[index];
}

#endif //SPHERES_MYVECTOR_H
