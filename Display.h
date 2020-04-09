#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <iostream>

class Display {

private:
	void activate_selected(const char selected);

public:
	Display();
	~Display();
	void show();	
};

#endif
