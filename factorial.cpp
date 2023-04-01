#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int n;
    cin>>n;
    int result = factorial(n);
    cout<< result;

}

int factorial(int n) {
    if(n != 0)
    {
        n = n*factorial(n-1);
    }
    else 
    {
        n = 1;
    }
    return n;
}