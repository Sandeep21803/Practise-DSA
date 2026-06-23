#include <iostream>
using namespace std;

// Function to count set bits without bit manipulation
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += n % 2;
        n /= 2;
    }
    return count;
}

int main() {
    int a, b;
    cin >> a >> b;

    int totalSetBits = countSetBits(a) + countSetBits(b);

    cout << totalSetBits << endl;

    return 0;
}
