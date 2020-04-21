#ifndef SORTER_H_
#define SORTER_H_ 

#include <string>

class Sorter {

private:
	std::string user_input{};
	size_t num_shifts{3};
	std::string alpha_key{"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
public:
	Sorter();
	~Sorter();
	
	void encrypt(const std::string user_input);
	void decrypt(const std::string user_input);

	void set_num_shifts(const size_t in_shifts);	
};

#endif
