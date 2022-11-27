#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, k = 0;
	char* star;

	scanf("%d", &num);
	star = (char*)malloc(sizeof(char) * num);

	while (1) {
		
		star[k] = '*';
		for (int i = 0; i < k+1; i++) {
			printf("%c", star[i]);
		}
		printf("\n");
		k++;
		if (k == num)
			break;
	}
	

	return 0;
}