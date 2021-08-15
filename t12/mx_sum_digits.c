// #include <stdio.h>

int mx_sum_digits(int num) {
	int b,sum = 0;

	while (num != 0) {
		b = num % 10;
		sum = sum + b;
		num = num / 10;
	}
	if (sum < 0) {
		sum *= -1;
	} 
	return sum;
}

// int main() {
// 	printf("%d\n",mx_sum_digits(-555));	
// 	printf("%d\n",mx_sum_digits(555));
// 	printf("%d\n",mx_sum_digits(0));	
// }
	
