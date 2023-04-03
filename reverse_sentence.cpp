#include <iostream>
#include <string>
using namespace std;

void reverse(string s);
long int i = 0;

int main() {
    string s;
    getline(cin, s);
    reverse(s);
}

void reverse(string s) {
    long int len = s.length();
    char temp;
    temp = s[i] ;
    s[i] = s[len - 1 - i];
    s[len - 1 - i] = temp;
    if((len % 2 != 0 && i == len/2) || (len % 2 == 0 && i == len/2 - 1)) 
    {
        s[len] = '\0';
        cout << s;
    }
    else
    {
        i++;
        reverse(s);
    }

}

