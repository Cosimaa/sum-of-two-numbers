#include <iostream>

using namespace std;

int sum(int a, int b);

int main() {
    int a = 5, b = 3;
    int result = sum(a, b);
    cout << result;
}

int sum(int a, int b) {
    return a + b;
}