#include <iostream>
#include "Display.h"

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

		std::cout << "Entered: " << selection << std::endl;	
	}
	while(selection != 'q' && selection != 'Q');
}
