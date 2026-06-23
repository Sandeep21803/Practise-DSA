#include<iostream>
using namespace std;
int sum(int arr[],int n,int sum ){
    sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int arr[5]={2,7,1,-4,11};
    cout<<sum(arr, 5, 0);
    return 0;
}