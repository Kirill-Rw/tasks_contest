#include <iostream>
using namespace std;

bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int last_num(int n) {
    return n % 10;
}

int time(int a, int b, int c, int d) {
    int k = a * 60 + b + c * 60 + d;
    if (24 * 60 < k) {
        return k - 24 * 60;
    }
    return k;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << time (a, b, c, d);
    return 0;
}
