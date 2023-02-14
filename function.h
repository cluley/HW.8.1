#include <iostream>
#pragma once

class bad_length : public std::exception {
public:
	const char* what() const override { return "Вы ввели слово запретной длины! До свидания."; }
};

int function(std::string str, int forbidden_length);