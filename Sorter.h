#ifndef SORTER_H_
#define SORTER_H_ 

#include <string>

class Sorter {

private:
	std::string user_input{};
public:
	Sorter();
	~Sorter();
	
	void encrypt(const std::string user_input);
	void decrypt(const std::string user_input);	
};

#endif
