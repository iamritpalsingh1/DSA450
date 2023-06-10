#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        if(intervals.size()==0)
            return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        
        int i=0;
        for(auto it: intervals)
        {
            if(ans[i][1]>=it[0])
            {
                ans[i][1]=max(ans[i][1],it[1]);
                
            }
            else{
                ans.push_back(it);
                i++;
            }
            
        }
        return ans;
    }
int main(){

   vector<vector<int>>intervals{{1,3},{2,6},{8,10},{15,18}};
   merge(intervals);
// cout intervals;

    
   return 0;
}