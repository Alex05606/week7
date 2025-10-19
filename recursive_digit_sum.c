
#include <stdio.h>

int recursiveDigitSum(long long n) {
    if (n < 10) return n;
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return recursiveDigitSum(sum);
}

int main() {
    long long n;
    printf("Enter number: ");
    scanf("%lld", &n);
    printf("Recursive digit sum = %d\n", recursiveDigitSum(n));
    return 0;
}
