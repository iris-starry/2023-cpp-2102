#include <iostream>

using namespace std;

int main(void) {

	int a = 30;     //a : 30

	int* pa = &a;   //pa : a�� �ּҰ�
	*pa = 100;      //pa�� ����Ű�� ���(a) : 100

	cout << "a�� ���� " << a << endl;



	return 0;
}