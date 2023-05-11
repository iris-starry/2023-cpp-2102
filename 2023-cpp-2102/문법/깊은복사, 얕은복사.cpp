#include <iostream>

using namespace std;

int main(void) {
	// ptr1은 int 3개짜리 배열을 동적할당 시킨 후 가리킨다.
	int* ptr1 = new int[3];
	ptr1[0] = 0, ptr1[1] = 10, ptr1[2] = 20;

	// ptr2는 별도의 동적할당을 한 후 ptr1이 가리키는 값들을 복사한다.
	// 이러한 복사를 깊은복사(deep copy)
	int* ptr2 = new int[3];
	for (int i = 0; i < 3; i++) {
		ptr2[i] = ptr1[i];
	}

	// 깊은 복사를 하면 고유의 공간을 가지므로
	// ptr2[i]은 100으로 바뀌지 않는다.
	ptr1[1] = 100;
	for (int i = 0; i <= 2; i++) {
		cout << ptr1[i] << " " << ptr2[i] << endl;
	}

	delete[] ptr1;
	delete[] ptr2;

	return 0;	
}
