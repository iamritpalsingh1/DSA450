#include<bits/stdc++.h>
using namespace std;
// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint.

    int minSubArrayLen(int target, vector<int>& nums) {
        int sum;
        int n=nums.size();
        int i=0;
        int j=i+1;
        int ans=0;
        sum=nums[i]+nums[j];
        while(j<n){
            if(sum<target){
                j++;
                sum+=nums[j];
            }
            else if(sum>target){
                sum-=nums[i];
                i++;
            }
            int length=j-i+1;
            ans=min(ans,length);

        }
        return ans;
    }
int main(){
    vector<int>nums = {2,3,1,2,4,3};
   cout<<minSubArrayLen(7,nums);
   return 0;
}