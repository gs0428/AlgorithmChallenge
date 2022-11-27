/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char text[100];

	scanf("%s", text);

	for (int i = 0; i < strlen(text); i++) {
		if (text[i] >= 'a' && text[i] <= 'z')
			text[i] -= 32;
		else if (text[i] >= 'A' && text[i] <= 'Z')
			text[i] += 32;

		printf("%c", text[i]);
	}

	return 0;
}*/