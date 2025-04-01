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

int fib(int x) {
    if (x == 1 || x == 2) {
        return 1;
    }
    int f_x = fib(x - 1) + fib(x - 2);
    return f_x;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a + b) / gcd(a, b);
}
    return 0;
}
