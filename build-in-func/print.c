#include <stdio.h>

void Print_text(char str[]) {
	char* po = str;
	while (*po != '\0') {
		putchar(*po);
		po++;
	}
}

int main() {
	char text[] = "hello world";
	//char *p = text;
	//char *p = &text[0];
	Print_text(text);

	//printf("%p", p);

	return 0;
}
