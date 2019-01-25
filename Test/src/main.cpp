#include <iostream>
#include <vector>

#include "ArrayList.cpp"

int main() {
	ArrayList<int> list;
	std::array<int, 3> arr = { 5, 7, 8 };
	list.push_back(arr);

	list.forEach([](int value) {std::cout << "Value is: " << value << std::endl; });

	std::cin.get();
}