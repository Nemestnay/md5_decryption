#include <iostream>
#include <cstring>
#include "md5.h"
using namespace std;

int main() {
    char en_ad[] = "20233f9213fe8d5af2cbcce681f3e27d9df32823";
    MD5 md5;
    char str[12] = "89000000000";
    for (long int a=9999999999; a >= 0;a--) {
        long int c = a;
        for (int b=0; b < 10; b++) {
            str[10-b] = char(c %10 + 48);
            c /= 10;
        }
    }
    /*
    for (int j=1; j<11; j++) {
        for (int i=9; i >=0; i--) {
            str[j] = char(i+48);
            cout << str << " " << md5.digestString(str) << endl;
        }
    }
    */

    return 0;
}
