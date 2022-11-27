/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char text[100];
	int location = 0, num[26];
	scanf("%s", text);

	for (int i = 0; i < 26; i++)
		num[i] = -1;

	for (int i = 0; i < 100; i++) {
		if (text[i] == NULL)
			break;

		for (int k = 0; k < 26; k++) {
			if (text[i] == 97 + k) {
				if (num[k] == -1) {
					num[k] = location;
					location++;
					break;
				}
				else {
					location++;
					break;
				}
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", num[i]);
	}

	return 0;
}*/