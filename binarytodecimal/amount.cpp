#include<iostream>
using namespace std;
int main()
{
    int amount;
    cout<<"Enter the amount in rupees"<<endl;
    cin>>amount;
    
    if (amount < 0) {
        cout << "Please enter a non-negative amount" << endl;
        return 1;
    }

    cout << "Breakdown:" << endl;
    
    switch(amount / 100) {
        case 0: break;
        default: 
            cout << "100-rupee notes: " << amount / 100 << endl;
    }
    amount %= 100;
    
    switch(amount / 50) {
        case 0: break;
        default: 
            cout << "50-rupee notes: " << amount / 50 << endl;
    }
    amount %= 50;
    
    switch(amount / 20) {
        case 0: break;
        default: 
            cout << "20-rupee notes: " << amount / 20 << endl;
    }
    amount %= 20;
    
    if (amount > 0) {
        cout << "1-rupee coins: " << amount << endl;
    }

    return 0;
}
