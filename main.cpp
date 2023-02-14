#include "function.h"

int main(int argc, char** argv) {
	int forbidden_length = 0;
	std::string str;

	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;

	do {
		std::cout << "Введите слово: ";
		std::cin >> str;

		try {
			std::cout << "Длина слова \"" << str << "\" равна " << function(str, forbidden_length) << std::endl;
		}
		catch (const bad_length& ex) {
			std::cout << ex.what() << std::endl;
			break;
		}
	} while (true);

	return 0;
}