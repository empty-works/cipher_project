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
		/*
		switch(selection) {
		
			case 'e':
			case 'E':
				{
					
					break;
				}
			case 'd':
			case 'D':
				{
					
					break;
				}
			default:
		}
		*/
	}
	while(selection != 'q' && selection != 'Q');
}
