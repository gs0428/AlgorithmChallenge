/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int N, find, count = 0;
	int* num;

	scanf("%d", &N);
	num = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}

	scanf("%d", &find);

	for (int i = 0; i < N; i++) {
		if (num[i] == find)
			count++;
	}

	printf("%d", count);

	return 0;

}*/