#include <bits/stdc++.h>
using namespace std;

void digit(int n) {
    while (n > 0) {
        int digi = n % 10;
        cout << digi << " ";
        n = n / 10;
    }
}

int main() {
    int n;
    cin >> n;

    digit(n);

    return 0;
}