#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class MString {
public:
	MString(const char* str)
	{
		unsigned int str_length = strlen(str);
		// �ʿ��� ���̸�ŭ ���ڿ� �����Ҵ�
		c_str_ = new char[str_length + 1];	// '/0'(�ι���) ���� +1
		strcpy(c_str_, str);
	}
	
	~MString() {
		//�����ڿ� �����Ҵ��� ������ ����
		delete[] c_str_;
	}

	unsigned int size() { return size_; }
	char* c_str() { return c_str_; }
private:
	unsigned int size_;			// ���ڿ��� ����
	char* c_str_;				// ���ڿ��� ����Ű�� �ּ�
};

int main(void)
{
	// new�� �����Ҵ��� ������ �ݵ�� delete�� �������Ѿ� ��
	// ���� �׷��� ������ �޸𸮰� �����ȴ�.
	MString* str = new MString("Aitai 2-1");

	cout << str->c_str() << endl;

	// str�� ���� delete�� ����Ǿ�����, str->c_str_�� ���� delete�� ������� ����
	// TODO : �̸� delete ���ִ� �Ҹ���(destructor) �����ϱ�
	delete str;
	
	return 0;

}