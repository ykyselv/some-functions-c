#include <stdbool.h>
// #include <stdio.h>

bool mx_isspace(char c) {
	if (c == 32 || (c >= 9 && c <= 13)) {
		return 1;
	}
	else {
		return 0;
	}
}

// int main() {
// 	printf("%d", mx_isspace(' '));
// 	printf("%d", mx_isspace('\t'));
// 	printf("%d", mx_isspace('\n'));
// }
