#include <stdio.h>
int main() {
    int n, re = 0, rem;
    scanf("%d", &n);
    while (n != 0) {
        rem = n % 10;
        r = r * 10 + rem;
        n /= 10;
    }
    printf("reversed number = %d", r);
    return 0;
}
