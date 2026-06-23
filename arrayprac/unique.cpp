#include<bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
        vector<int> freq;
        vector<int> visited(arr.size(),0);
        for(int i=0;i<arr.size();i++){
            if(visited[i]==1){
                continue;
            }
            int count=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    count++;
                    visited[j]=1;

                }

            }
            freq.push_back(count);
            for(int i=0;i<freq.size();i++){
                for(int j=i+1;j<freq.size();j++){
                    if(freq[i]==freq[j]){
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
int main(){
    vector<int> arr={1,2};
    cout<<uniqueOccurrences(arr);
}