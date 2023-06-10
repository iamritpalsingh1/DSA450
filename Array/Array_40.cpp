#include <bits/stdc++.h>
#include<vector>
using namespace std;
		int find_median(vector<int> v)
		{
		    // Code here.
		    int n=v.size();
		    sort(v.begin(),v.end());
		    return n%2==0?(v[n/2-1]+v[n/2])/2 : v[n/2];
		}
int main(){
    vector<int>v={4,5,5,3,52,2};
    find_median(v);
   return 0;
}