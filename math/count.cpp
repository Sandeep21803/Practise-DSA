#include<bits/stdc++.h>
using namespace std;

int count_digit(int n){
    int count=0;
    while(n!=0){
        count=count+1;
        n=n/10;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<count_digit(n);
}