#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5]={2,7,1,-4,11};
    int key;
    cin>>key;
    cout<<search(arr,5,key)<<endl;
    return 0;
}