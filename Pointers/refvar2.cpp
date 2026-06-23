#include<iostream>
using namespace std;

int& func(int a){
    int num=a;
    int& ans=num;
    return ans;
}
int main(){
    return 0;
}