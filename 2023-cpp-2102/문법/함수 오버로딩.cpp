#include<iostream>

using namespace std;

// 함수 오버로딩을 해서 함수이름을 간결하게
// 함수이름은 같으나 매개변수가 다르다
// 함수 오버로딩 = 함수이름을 같게 하는 행위
int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}

int main(void) {
	cout << sum(1, 2) << endl;
	cout << sum(1.1f, 2.2f) << endl;
	return 0;
}