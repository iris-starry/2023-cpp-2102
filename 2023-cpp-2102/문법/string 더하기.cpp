#include<iostream>
#include<string>

using namespace std;

int main(void) {

	char str1[30] = "Jiwoo";
	char str2[30] = "Rock";

	strcat(str1, str2);
	printf("%s \n", str1);

	return 0;
}