#include <iostream>

using namespace std;

int main(void) {
	// ptr1은 int 3개짜리 배열을 동적할당 시킨 후 가리킨다.
	int* ptr1 = new int[3];
	ptr1[0] = 0, ptr1[1] = 10, ptr1[2] = 20;

	// ptr2는 별도의 동적할당을 하지 않고 ptr1의 주소값만 복사한다.
	int* ptr2 = ptr1;
	for (int i = 0; i <= 2; i++) {
		cout << ptr1[i] << " " << ptr2[i] << endl;
	}
	return 0;	
}
