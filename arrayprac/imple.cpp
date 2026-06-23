#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[],int size){
    cout<<"printing all array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printng done";
}
int main(){
    int arr[10]={1,1,1,1,1,1,1,1,1,1};
    printarray(arr,5);
    int size= sizeof(arr)/sizeof(int);
    cout<<"size"<<size<<endl;

}