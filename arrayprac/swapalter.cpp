#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
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
    swapAlternate(arr,n);
    printarray(arr,n);
}