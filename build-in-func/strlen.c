#include <stdio.h>

int Strlen(char str[]) {

	int i = 0;
	//while (str[i] != NULL) {
	while (str[i] != '\0') {
		i++;
	}

	return i;
}

int main() {
	char text[] = "hello";

	int index_sum = Strlen(text);
	printf("%d\n", index_sum);

	return 0;
}