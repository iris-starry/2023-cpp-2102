#include<iostream>
#include<string>

using namespace std;

int main(void) {

	string str1 = "Hello";
	string str2 = "World";

	// c++ string ����
	// str2 �� str1���� ����(dictionary)�� �� �ʰ� ���´�
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