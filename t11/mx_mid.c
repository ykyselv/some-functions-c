// #include <stdio.h>
  
int mx_mid(int a, int b, int c) {
    int mid = a;

    if ((b >= a && b <= c) || (b >= c && b <= a)) {
        mid = b;
    } 

    if ((c >= b && c <= a) || (c >= a && c <= b)) {
        mid = c;
    }

    return mid;
}

// int main() {
//     printf(("%d\n"),mx_mid(5,6,6));
//     printf(("%d\n"),mx_mid(6,6,6));
//     printf(("%d\n"),mx_mid(5,55,6));
// }                              
