#ifndef ENCRYPTER_H_
#define ENCRYPTER_H_

#include <string>

class Encrypter {

private:
	std::string user_input{};

public:	
	Encrypter();
	Encrypter(const std::string in_input);
	~Encrypter();
};

#endif
