#include <stdio.h>
int main() {
    int n, i;
    it f = 1;
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial of a negative number doesn't exist");
    else {
        for (i = 1; i <= n; ++i) {
            f *= i;
        }
        printf("Factorial of %d = %d", n, f);
    }

    return 0;
}
