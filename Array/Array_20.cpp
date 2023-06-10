#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    void nextPermutation(vector<int>& nums) {
        
        bool flag=false;
        int j;
        int i=nums.size()-1;
        
        for(;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                flag=true;
                break;
            }
        }
        
        if(!flag)
        {
            sort(nums.begin(),nums.end());
        }
        
        
        else{
            for(j=nums.size()-1;j>i;j--)
            {
                if(nums[i-1]<nums[j])
                {
                    break;
                }
            }
             int temp=nums[i-1];
            nums[i-1]=nums[j];
            nums[j]=temp;    
        reverse(nums.begin()+i,nums.end());
    }
    }



int main(){

    vector<int>nums{8,9,1,7,6,5,4,3,2};

    nextPermutation(nums);

    // cout nums;
     
   return 0;
}