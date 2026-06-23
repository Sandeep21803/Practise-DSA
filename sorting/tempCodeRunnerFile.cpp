#include<iostream>
using namespace std;


int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;