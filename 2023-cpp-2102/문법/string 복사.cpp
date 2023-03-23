#include <iostream>
#include <string>  //std::string이 들어있음(.h 노노노)

int main(void) {
	std::string str1;
	std::string str2 = "c_insert";

	str1 = str2;
	std::cout << str1 << std::endl;
	

	return 0;
}