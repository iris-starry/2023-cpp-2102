#include <iostream>

using namespace std;

int main(void) {

	int a = 30;     //a : 30

	int* ra = &a;   //int* pa = &a;
	*ra = 100;      //*pa = 100

	cout << "a�� ���� " << a << endl;



	return 0;
}