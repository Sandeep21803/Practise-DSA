#include<bits/stdc++.h>
using namespace std;

void sortZeroOne(vector<int>& nums) {
    int low = 0, high = (int)nums.size() - 1;

    while (low <= high) {
        if (nums[low] == 0) {
            low++;
        } else {
            swap(nums[low], nums[high]);
            high--;
        }
    }
}
    void printarray(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
    int main(){
        vector<int> nums={0,0,0,1,1,0,1,0,1};
        sortZeroOne(nums);
        printarray(nums);

    }
    