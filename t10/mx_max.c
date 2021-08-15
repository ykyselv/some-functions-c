// #include <stdio.h>

int mx_max(int a, int b, int c) {
	int max = a;

	if (b > a && b > c) {
		max = b;
	}
	if (c > b && c > a) {
		max = c;
	}
	return max;	
}

// int main() {
// 	printf(("%d\n"),mx_max(-1,0,1));
// 	printf(("%d\n"),mx_max(-3,-133,2344));
// }
