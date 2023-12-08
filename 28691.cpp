#include <iostream>

int main() {
	char c;
	std::cin >> c;

	switch (c) {
	case 'M':
		std::cout << "MatKor";
		break;
	case 'W':
		std::cout << "WiCys";
		break;
	case 'C':
		std::cout << "CyKor";
		break;
	case 'A':
		std::cout << "AlKor";
		break;
	default:
		std::cout << "$clear";
	}

	return 0;
}
