#include <iostream>
using namespace std;
int fibo(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    
    int x=0, y=1;
    for(int i=2; i<n; i++){
        int ans=x+y;
        x=y;
        y=ans;
    }
    return y;
}
int main(){
    int n;
    cin>>n;
    cout << fibo(n) << endl;
    return 0;
}