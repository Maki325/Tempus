#include <iostream>
#include <vector>
#include <ctime>

#include "ArrayList.cpp"

int main() {
	ArrayList<int> list;
	std::array<int, 3> arr = { 5, 7, 8 };
	list.push_back(arr);

	list.forEach([](int value) {std::cout << "Value is: " << value << std::endl; });

	std::time_t result = std::time(nullptr);
	std::tm* time_ptr = std::localtime(&result);
	//std::localtime lt = std::localtime(&result);
	//std::cout << std::asctime(lt) << std::endl;

	std::cin.get();
}