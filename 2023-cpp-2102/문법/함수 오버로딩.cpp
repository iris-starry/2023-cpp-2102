#include<iostream>

using namespace std;

int sum_int(int a, int b) {
	return a + b;
}

float sum_float(float a, float b) {
	return a + b;
}

int main(void) {
	cout << sum_int(1, 2) << endl;
	cout << sum_float(1.1, 2.2) << endl;
	return 0;
}