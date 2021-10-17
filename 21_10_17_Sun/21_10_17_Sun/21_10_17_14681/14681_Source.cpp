#include <iostream>

int main() {
	int x = 0;
	int y = 0;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	if (x > 0 && y > 0)
		printf_s("1");
	else if (x > 0 && y < 0)
		printf_s("4");
	else if (x < 0 && y > 0)
		printf_s("2");
	else if (x < 0 && y < 0)
		printf_s("3");
}