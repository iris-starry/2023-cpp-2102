#include <stdio.h>
#include <string.h>

int main(void) {
	char str[30] = { 0, };
	char str2[30] = "c_insert";

	for (int i = 0; str2[i] != '\0'; i++) {
		str[i] = str2[i];
	}

	printf("%s \n", str);

	return 0;
}