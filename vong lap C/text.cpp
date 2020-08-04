#include<stdio.h>

int main() {
	int a = 2;
	int b = 10;
	scanf("%d%d", &a, &b);
	for (int i = 2; i <= 10; i = a + b) {
		printf("%d ", i);
	}
	return 0;
}
	
