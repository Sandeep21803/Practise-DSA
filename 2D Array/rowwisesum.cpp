#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int target){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}
void printSum(int arr[][3]){
    cout<<"Printing Sum->"<<endl;
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int col = 0; col < 3; col++){
            sum += arr[i][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
}
    cout<< "Enter the Element to search"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr,target)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    printSum(arr);
    return 0;
}
