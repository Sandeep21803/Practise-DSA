#include<bits/stdc++.h>
using namespace std;
int divisor(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            count++;
        }
    }
    return count;
}

bool prime(int n){
    int cnt = divisor(n);
    cout<<"\n";
    return cnt==2;
}

int main(){
    int n;
    if(!(cin>>n)) return 0;
    if(prime(n)) cout<<n<<" is prime\n";
    else cout<<n<<" is not prime\n";
}