#include <iostream>
#include "Display.h"
#include "Encrypter.h"
#include "Decrypter.h"

Display::Display() {


}

Display::~Display() {


}

void Display::show() {

	char selection{};
	int num_shifts{3};

	do {
	
		std::cout << "e) Encrypt text" << std::endl;
		std::cout << "d) Decrypt text" << std::endl;
		std::cout << "q) Quit" << std::endl;

		std::cin >> selection;
		activate_selected(selection);	
	}
	while(selection != 'q' && selection != 'Q');
}

void Display::activate_selected(const char selected) {

	if(selected == 'e' || selected == 'E') {
	
		Encrypter encrypter;
	}
	else if(selected == 'd' || selected == 'D') {
	
		Decrypter decrypter;
	}
	else if(selected == 'q' || selected == 'Q') {
	
		std::cout << "Goodbye!" << std::endl;
	}
	else {
	
		std::cout << "Invalid selection..." << std::endl;
	}
}
