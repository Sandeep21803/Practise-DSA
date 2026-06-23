#include <iostream>
using namespace std;


void pattern7(int N) {
    
        // Outer loop for rows
        for (int i = 0; i < N; i++) {
            
            // Print leading spaces (N - i - 1 spaces)
            for (int j = 0; j < i; j++) {
                cout << " ";
            }

            // Print stars (2*i + 1 stars)
            for (int j = 0; j <2*N - 2 * i - 1; j++) {
                cout << "*";
            }

            // Print trailing spaces (optional, same count as leading spaces)
            for (int j = 0; j < i; j++) {
                cout << " ";
            }

            // Move to next row
            cout << endl;
        }
    }

int main() {
    int N;
    cin>>N;
    pattern7(N);
    return 0;
}
