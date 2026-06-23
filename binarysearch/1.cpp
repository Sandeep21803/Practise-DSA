#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+((e-s)/2);
    while(s<=e){
        if(mid==key){
            return mid;
        }
        if(key>arr[mid]){
            s=mid+1;

        }
        else{
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return -1;


}
int main(){
    int arr[]={5,6,7,8,9,10,11};
    int n=sizeof(arr)/sizeof(int);
    int k;
    cin>>k;
    int search=binarysearch(arr,n,k);
    cout<<search<<endl;
    return 0;



}