#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long a, b;

	scanf("%ld %ld", &a, &b);
	
	printf("%ld", (a + b) * (a - b));
	
	return 0;
}