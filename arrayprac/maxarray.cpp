#include<bits/stdc++.h>
using namespace std;
int getmax(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }   }
        return maxi;
}

int main(){
    int arr[]={5,4,8,9,7,2,1};
    int n=7;
    cout<<getmax(arr,7);
    return 0;

}