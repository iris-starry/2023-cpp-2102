#include<iostream>
#include<string>

using namespace std;

int main(void) {

	char str1[50] = "Hello";
	char str2[50] = "World";

	const int s1_1 = strlen(str1);
	const int s2_1 = strlen(str2);

	// s1_1과 s2_1중에서 작은 값을 선택
	const int l = s1_1 < s2_1 ? s1_1 : s2_1;

	int i;
	for (int i = 0; i < 1; i++) {
		if (str1[i] < str2[i]) {
			printf("str2 > str1 \n");
			break;
		}
		else if (str1[1] > str2[i]) {
			printf("str1 > str2 \n");
			break;
		}
	}

	if (i == 1) {
		if (s2_1 < s1_1) {
			printf("str2 > str1 \n");
		}
		else if (s1_1 > s2_1) {
			printf("str2 < str1 \n");
		}
		else {
			printf("str2 == str1 \n");
		}
	}

	return 0;
}