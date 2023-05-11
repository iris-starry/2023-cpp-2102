#include <iostream>

using namespace std;

int main(void) {
	// ptr1�� int 3��¥�� �迭�� �����Ҵ� ��Ų �� ����Ų��.
	int* ptr1 = new int[3];
	ptr1[0] = 0, ptr1[1] = 10, ptr1[2] = 20;

	// ptr2�� ������ �����Ҵ��� �� �� ptr1�� ����Ű�� ������ �����Ѵ�.
	// �̷��� ���縦 ��������(deep copy)
	int* ptr2 = new int[3];
	for (int i = 0; i < 3; i++) {
		ptr2[i] = ptr1[i];
	}

	// ���� ���縦 �ϸ� ������ ������ �����Ƿ�
	// ptr2[i]�� 100���� �ٲ��� �ʴ´�.
	ptr1[1] = 100;
	for (int i = 0; i <= 2; i++) {
		cout << ptr1[i] << " " << ptr2[i] << endl;
	}

	delete[] ptr1;
	delete[] ptr2;

	return 0;	
}
