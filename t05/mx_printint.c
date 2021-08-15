// #include <stdio.h>
// #include <unistd.h>
	
void mx_printchar(char c);

void mx_printint(int n) {
  if (n < 0) {
    mx_printchar('-');
    n *= -1;
  }
  if (n > 9)
    mx_printint(n / 10);
  mx_printchar(n % 10 + 48);
}
	
// int main() {
//   mx_printint(123);
//   mx_printchar(10);

//   mx_printint(-123);
//   mx_printchar(10);

//   mx_printint(1345634523);
//   mx_printchar(10);

//   mx_printint(1234563453);
//   mx_printchar(10);

//   mx_printint(123345);
//   mx_printchar(10);
// }