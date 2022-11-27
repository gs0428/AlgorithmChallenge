#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char score[3];

	scanf("%s", score);

	switch (score[0]) {
	case 'A':
		switch (score[1]) {
		case '+':
			printf("4.3");
			return 0;
		case '0':
			printf("4.0");
			return 0;
		case '-':
			printf("3.7");
			return 0;
		}
	case 'B':
		switch (score[1]) {
		case '+':
			printf("3.3");
			return 0;
		case '0':
			printf("3.0");
			return 0;
		case '-':
			printf("2.7");
			return 0;
		}
	case 'C':
		switch (score[1]) {
		case '+':
			printf("2.3");
			return 0;
		case '0':
			printf("2.0");
			return 0;
		case '-':
			printf("1.7");
			return 0;
		}
	case 'D':
		switch (score[1]) {
		case '+':
			printf("1.3");
			return 0;
		case '0':
			printf("1.0");
			return 0;
		case '-':
			printf("0.7");
			return 0;
		}
	case 'F':
		printf("0.0");
		return 0;
	}
}
