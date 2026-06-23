#include<bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n){
    if(n==0)
        return 0;
    int product=1;
    int sum=0;
    int result=0;
    while(n>0){
        int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    result=(product-sum);
    return result;
}

int main(){
    int n;
    cin>>n;
    cout<<subtractProductAndSum(n)<<endl;
    return 0;

}