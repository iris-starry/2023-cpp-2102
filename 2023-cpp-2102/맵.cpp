#include <iostream>
#include<map>
#include<string>

using namespace std;

int main(void) {

	// key:���ڿ�, value:����
	map<string, int> moving;

	moving["������"] = 1987;
	moving["�����"] = 2000;
	moving["����"] = 1959;

	map<string, int>::iterator iter;
	// map�� ������ ���� ������ iterator�θ� �ݺ����� �ؾ� �Ѵ�
	// first�� key, second�� value
	for (iter = moving.begin(); iter != moving.end(); iter++) {
		cout << iter->first << iter->second << endl;
	}
}