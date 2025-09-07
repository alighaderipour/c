#include <stdio.h>

int main() {
	int c;
	int i = 0;
	int flag = 0;
	for (i; (c = getchar()) != EOF;++i) {
		if (c == ' ') {
			if (flag == 1) {
				continue;
			}
			flag = 1;
			putchar(c);
		}
		else {
			putchar(c);
			flag = 0;
		}
	}
	return 0;
}
