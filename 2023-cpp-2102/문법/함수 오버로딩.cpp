#include<iostream>

using namespace std;

// �Լ� �����ε��� �ؼ� �Լ��̸��� �����ϰ�
// �Լ��̸��� ������ �Ű������� �ٸ���
// �Լ� �����ε� = �Լ��̸��� ���� �ϴ� ����
int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}

int main(void) {
	cout << sum(1, 2) << endl;
	cout << sum(1.1f, 2.2f) << endl;
	return 0;
}