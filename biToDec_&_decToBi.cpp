#include <iostream>
#include <math.h>
using namespace std;

int biToDec(int n);

int main() {
    int n = 1010;
    int decimal = biToDec(n);
    cout << decimal;
}

int biToDec(int n) {
    int dec = 0, count = 0;
    if(n/10 != 0)
        return biToDec(n/10);
    else
        if(n == 1)
            dec += pow(2,count);
        count++;
    
    return dec;
}