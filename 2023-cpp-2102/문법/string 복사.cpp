#include <iostream>
#include <string>  //std::string�� �������(.h ����)

int main(void) {
	std::string str1;
	std::string str2 = "c_insert";

	str1 = str2;
	std::cout << str1 << std::endl;
	

	return 0;
}