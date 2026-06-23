#include <bits/stdc++.h>
using namespace std;

int digit(int n) {
    int arm = 0;
    while (n > 0) {
        int digi = n % 10;
        arm += digi * digi * digi;
        n = n / 10;
    }
    return arm;
}

bool armstrong(int n){
    return digit(n) == n;
}
int main() {
    int n;
    cin >> n;

    if(armstrong(n))
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}