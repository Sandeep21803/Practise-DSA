#include<bits/stdc++.h>
using namespace std;
int getmin(int arr[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }   }
        return mini;
}

int main(){
    int arr[]={5,4,8,9,7,2,1};
    int n=7;
    cout<<getmin(arr,7);
    return 0;

}