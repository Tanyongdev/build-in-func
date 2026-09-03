#include <stdio.h>

void swap(int *num1,int *num2) {

	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}

int main() {
	int a = 10;
	int b = 50;

	printf("----before swap-----\n");
	printf("%d\n", a);
	printf("%p\n", &a);
	printf("%d\n", b);
	printf("%p\n", &b);

	swap(&a, &b);

	printf("----after swap-----\n");
	printf("%d\n", a);
	printf("%p\n", &a);
	printf("%d\n", b);
	printf("%p\n", &b);

	return 0;
}
