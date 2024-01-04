#include<bits/stdc++.h>
using namespace std;

long long findFibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    long long fibNMinusTwo = 0;
    long long fibNMinusOne = 1;
    long long fibN;

    for (int i = 2; i <= n; ++i) {
        fibN = fibNMinusTwo + fibNMinusOne;
        fibNMinusTwo = fibNMinusOne;
        fibNMinusOne = fibN;
    }

    return fibN;
}

int main() {
    int n;
    cin >> n;

    if (n >= 1 || n <= 10000) {
        long long fibonacciNumber = findFibonacci(n);
        cout << fibonacciNumber << endl;
    }
    return 0;
}
