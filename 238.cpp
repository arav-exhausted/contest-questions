#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> answer(nums.size());
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
        prefix[0]=1;
        suffix[nums.size()-1]=1;
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            answer[i]=prefix[i]*suffix[i];
        }
        return answer;
    }

};


int main(){
    Solution obj;
    vector<int> nums={1,2,3,4};
    vector<int>result = obj.productExceptSelf(nums);
    cout<<"[";
    for(auto c:result){
        cout<<c<<" ";
        
    }
    cout<<"]";
}