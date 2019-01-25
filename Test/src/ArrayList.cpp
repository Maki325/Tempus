#include "ArrayList.h"

template<typename T>
ArrayList<T>::ArrayList()
{

}

template<typename T>
ArrayList<T>::~ArrayList()
{

}

template<typename T>
void ArrayList<T>::push_back(T val) {
		vector.push_back(val);
}

template<typename T>
template<std::size_t SIZE>
void ArrayList<T>::push_back(std::array<T, SIZE>& vals) {
	for(T val:vals)
		vector.push_back(val);
}

template<typename T>
void ArrayList<T>::forEach(std::function<void(T value)> fnc) {
	for (T val : vector) {
		fnc(val);
	}
}
