#include <iostream>

using namespace std;

void 더하라2를(int* num) {
	*num += 2;
}

int main(void) {
	int a = 3;
	더하라2를(&a);

	cout << a << endl;
	return 0;
}