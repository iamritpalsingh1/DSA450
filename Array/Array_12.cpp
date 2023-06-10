#include<iostream>
#include<vector>
using namespace std;

    void rotate(vector<int>& nums, int k) {
        vector<int> nums1(nums.size());
            int n =nums.size();
        
        for(int i=0;i<n;i++)
        {
            nums1[(i+k)%n]=nums[i];
        }
        nums=nums1;
        
		// int n=nums.size();
		// k=k%n;
		// reverse(nums.begin(),nums.end());
		// reverse(nums.begin(),nums.begin()+k);
		// reverse(nums.begin()+k,nums.end());
	}
int main(){
    
    vector<int> nums{1,2,3,4,5,6,7,8};
    int k=3;

    rotate(nums,k);


   return 0;
}