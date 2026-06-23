#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums,int target) {
    vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==target){
                        vector<int> temp={nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        ans.push_back(temp);
                    }

                }
            }

        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()), ans.end());
        return ans;
        
    }
int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
    int target;
    cin>>target;
    vector<vector<int>> result = threeSum(nums,target);
    for (const auto& triplet : result) {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i + 1 < triplet.size()) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}