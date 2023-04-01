#include <iostream>

int GCD(int a, int b);

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int result = GCD(a, b);
    printf("%d", result);
}

int GCD(int a, int b) {
    int r = a % b;
    if( r == 0)
        return b;
    else if( r != 0)
        return GCD(b, r);
}