#include <iostream>

using namespace std;

int main() {
    int a, b, a1, b1;
    cin >> a >> b;

    bool otritsatelnoe;

    if (a * b < 0) {
        otritsatelnoe = true;
    } else {
        otritsatelnoe = false;
    }

    if (a < 0) {
        a *= -1;
    }
    if (b < 0) {
        b *= -1;
    }

    a1 = a;
    b1 = b;

    while (a1 != 0 and b1 != 0) {
        if (a1 > b1) {
            a1 %= b1;
        } else {
            b1 %= a1;
        }
    }
    int c = a1 + b1;
    a /= c;
    b /= c;
    if (otritsatelnoe == true) {
        cout << "-" << a << " " << b;
    } else {
        cout << a << " " << b;
    }

}