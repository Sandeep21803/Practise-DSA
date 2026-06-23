#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[]={5,4,9,8,7,6,3,5,4};
    int n=9;
    cout<<"sum is : "<<sum(arr,n)<<endl;
    return 0;
}