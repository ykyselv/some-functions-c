#include <stdbool.h>
// #include <stdio.h>

bool mx_isdigit(int c) {
	if(c>=48 && c<=57) {
		return 1;
	}
	else {
		return 0;
	}
}

// int main() {
// 	printf("%d", mx_isdigit('g'));
// 	printf("%d", mx_isdigit('0'));
// 	printf("%d", mx_isdigit('9'));
// }
	
