#include <iostream>

int main() {
	int h = 0;
	int m = 0;
	scanf_s("%d", &h);
	scanf_s("%d", &m);
	if (m < 45) {
		if (h == 0) 
			h = 23;
		else 
			h -= 1;
		m += 15;
	}
	else 
		m -= 45;
	printf_s("%d ", h);
	printf_s("%d ", m);
}