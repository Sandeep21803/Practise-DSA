#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n!=0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return rev;
}
void checkPalindrome(int n){
    if(reverse(n)==n){
        cout<<" palindrome";
    }
    else 
        cout<<"Not Palindrome";
}

int main(){
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;
    checkPalindrome(n);
}