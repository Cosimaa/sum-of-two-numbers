#include <iostream>
#include <string.h>
using namespace std;

int i = 0 ;
void reverse(string s);

int main() {
    string s = "hello" ;
    reverse(s) ;
}

void reverse(string s) {
    int len = s.length() ;
    char temp ;
    temp = s[i] ;
    s[i] = s[len - 1 - i] ;
    s[len - 1 - i] = temp ;
    i++ ;
    if(i == len) 
    {
        s[len] = '\0';
        cout << s;
    }
    else
    {
        reverse(s);
    }

}

