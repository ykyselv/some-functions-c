// #include <stdio.h>

int mx_tolower(int c) {
	if (c >= 65 && c <= 90) {
		return (c + 32);
	} 
	else { 
		return (c);	 
	}			
}

// int main() {
// 	printf("%c", mx_tolower('Z'));
// 	printf("%c", mx_tolower('s'));
// 	printf("%c", mx_tolower('S'));
// 	printf("%c", mx_tolower('f'));
// }
	
