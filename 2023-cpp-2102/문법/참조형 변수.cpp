#include <iostream>

using namespace std;

int main(void) {

	int a = 30;     //a : 30

	int* ra = &a;   //int* pa = &a;
	*ra = 100;      //*pa = 100

	cout << "aÀÇ °ªÀº " << a << endl;



	return 0;
}