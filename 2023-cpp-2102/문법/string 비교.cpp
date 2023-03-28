#include<iostream>
#include<string>

using namespace std;

int main(void) {

	string str1 = "Hello";
	string str2 = "World";

	// c++ string 편리해
	// str2 가 str1보다 사전(dictionary)에 더 늦게 나온다
	if (str2 > str1) {
		cout << "str2 > str1";
	}
	else if (str2 < str1) {
		cout << "str2 < str1";
	}
	else {
		cout << "str2 == str1";
	}


	return 0;
}