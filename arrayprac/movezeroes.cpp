#include<bits/stdc++.h>
using namespace std;

void movezeroes(vector<int>& arr){
    int i=0;
    for(int j=0;j<arr.size();j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
int printArray(vector<int>& arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr={0,1,0,12,4,0,6,7};
    movezeroes(arr);
    printArray(arr);
    return 0;
}