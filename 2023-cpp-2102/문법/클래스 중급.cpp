#include <iostream>

using namespace std;

class MString {
public:
	MString() {}
	MString(const char* str) {
		c_str_ = str;
	}
	unsigned int size() { return size_; }
	const char* c_str() { return c_str_; }
private:
	unsigned int size_;  // ���ڿ��� ����
	const char* c_str_;  // ���ڿ��� ����Ű�� �ּ�
};

int main(void) {
	MString str = MString("yakitori tabetai");

	cout << str.c_str() << endl;

	return 0;
}