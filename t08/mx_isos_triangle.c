#include <unistd.h>

void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
 
	for(unsigned int i = 1; i <= length; i++) {
		for(unsigned int j = 1; j <= i; j++) {
			mx_printchar(c);
		}
		mx_printchar('\n');
	} 
}

// int main() {
// 	mx_isos_triangle(3,'*');
// 	mx_printchar(10);
// 	mx_isos_triangle(5, '*');
// 	mx_printchar(10);
// 	mx_isos_triangle(0,'*');
// 	mx_printchar(10);
// 	mx_isos_triangle(1,'*');
// 	mx_printchar(10);
// }
