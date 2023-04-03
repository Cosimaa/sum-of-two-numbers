#include <iostream>
using namespace std;

int result(int base, int power);


int main() {
    int base, power;
    cin >> base >> power;
    int upshot = result(base, power);
    cout << upshot;

}

int result(int base, int power) {
    if(power != 0)  
        return base*result(base, --power);
    else 
        return 1;
}
