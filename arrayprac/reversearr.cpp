#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={7,8,5,6,17,6,2,3};
    int n=sizeof(arr)/sizeof(int);
    reverse(arr,n);
    printarray(arr,n);
}