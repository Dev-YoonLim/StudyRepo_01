#include <iostream>

int main() {
	int input;
	scanf_s("%d", &input);
	if (input % 4 == 0) {
		if (input % 100 != 0) {
			printf_s("1");
		}
		else {
			if (input % 400 == 0)
				printf_s("1");
			else
				printf_s("0");
		}
	}
	else
		printf_s("0");
}