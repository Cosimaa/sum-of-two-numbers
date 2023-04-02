#include <iostream>

int sum(int n);

int main() {
    int n;
    scanf("%d", &n);
    int a = sum(n);
    printf("Sum of first N natural numbers is: %d", a);
    
}

int sum(int n)
{
    if(n != 0)
    {
        n = n + sum(n-1);
    }
    else 
    {
        n = 0;
    }
    return n;   
}
