#include<bits/stdc++.h>
using namespace std;
// Example 1:


// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
// Example 2:

// Input: height = [4,2,0,3,2,5]
// Output: 9
//O(n) with Space--> O(n)
    int trap(vector<int>& height) {
        if(height.size()<=2){
            return 0;
        }
        vector<int>left(height.size()),right(height.size());

        left[0]=height[0];
        int leftmax=height[0];
        for(int i=1;i<height.size();i++){
            left[i]=leftmax;
            leftmax=max(leftmax,height[i]);
        }

        right[height.size()-1]=0;
        int rightmax=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--){
            right[i]=rightmax;
            rightmax=max(rightmax,height[i]);
        }        

        int area=0;
        for(int i=1;i<height.size();i++)
        {
            if(height[i]<left[i] && height[i]<right[i]){
            int level=min(left[i],right[i]);
            int a=level-height[i];
            area=area+a;                
            }

        }
        return area;
    }

// With O(N) and Space O(1)
vector<int>height = {0,1,0,2,1,0,1,3,2,1,2,1};
int n=height.size();
int rightmax=height[n-1];
int leftmax=height[0];
int right=n-2;
int left=1;
int area=0;
while(left<right)
{
    if(leftmax<rightmax)
    {
        if(height[left]>leftmax){
            leftmax=height[left];
        }
        else{
            area=area+leftmax-height[left];
        }
        left++;

    }
    else{

        if(height[right]>rightmax){
            rightmax=height[right];
        }
        else{
            area=area+rightmax-height[right];
        }
        right--;       

    }
}

int main(){
    
   return 0;
}