#include <stdio.h>
int fibonicci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonicci(n - 1) + fibonicci(n - 2);
}

int main()
{
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n); 
    
    printf("Fibonacci series:\n");
    
    for (i = 0; i < n; i++)  
        printf("%d ", fibonicci(i));  
    
    printf("\n");
    return 0;
}

