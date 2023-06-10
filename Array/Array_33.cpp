#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    bool find3Numbers(int A[], int n, int X)
    {
        for (int i = 0; i < n - 2; i++)
        {
        unordered_set<int> s;
        int curr_sum = X - A[i];
        for (int j = i + 1; j < n; j++)
        {
            if (s.find(curr_sum - A[j]) != s.end())
            {
                return true;
            }
            s.insert(A[j]);
        }
    }
 
    // If we reach here, then no triplet was found
    return false;
        
    }
int main(){
    int A[]={12,3,4,5,1};
    find3Numbers(A,5,10);
   return 0;
}