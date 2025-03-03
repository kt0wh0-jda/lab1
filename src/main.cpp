#include <iostream>
#include "utils.cpp"

int main() {
	int a = { 4 };
	int b(3);
	std::cout << "a + b = " << sum(a, b) << '\n';
	std::cout << "Hello, world!";
	return 0;
}