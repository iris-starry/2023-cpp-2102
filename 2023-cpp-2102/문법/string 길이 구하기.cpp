#include<iostream>
#include<string>

using namespace std;

int main(void) {

	string str = "Jiwoo";

	//str.length()도 가능하나. size()를 더 권장
	cout << "문자열의 길이는 " << str.size() << endl;

	return 0;
}