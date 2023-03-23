#include<stdio.h>
#include<string.h>

using namespace std;

int main(void) {

	char str1[30] = "Jiwoo";
	char str2[30] = "Rock";

	const int str1_l = strlen(str1);
	const int str2_l = strlen(str2);
	for (int i = str1_l; i < str1_l + str2_l; i++) {
		str1[i] = str2[i - str1_l];
	}
	printf("%s \n", str1);

	return 0;
}