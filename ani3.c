#include<stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    
    if (num < 0)
        printf("Factorial not found.\n");
    else {
        int fact = factorial(num);  
        printf("%d! = %d\n", num, fact);
    }
    
    return 0;
}

