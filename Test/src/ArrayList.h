#pragma once

#include <vector>
#include <functional>
#include <array>

template<typename T>
class ArrayList
{
private:
	std::vector<T> vector;
public:
	ArrayList();

	~ArrayList();

	void push_back(T val);

	template<std::size_t SIZE>
	void push_back(std::array<T, SIZE>& vals);

	T operator[](unsigned int index) {
		return vector[index];
	}

	void forEach(std::function<void(T value)> fnc);
};

