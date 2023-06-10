#include <bits/stdc++.h>
using namespace std;
// Integers

// Input:
// N = 7
// a[] = {2,6,1,9,4,5,3}
// Output:
// 6
// Explanation:
// The consecutive numbers here
// are 1, 2, 3, 4, 5, 6. These 6
// numbers form the longest consecutive
// subsquence.
int findLongestConseqSubseq(int arr[], int N)
{
    // Your code here
    //   int j;
    int k = 0;
    int v = 0;
    sort(arr, arr + N);
    for (int i = 0; i < N - 1; i++)
    {
        if (arr[i + 1] - arr[i] == 1)
        {
            k = k + 1;
        }
        else if (arr[i] == arr[i + 1])
        {
        }
        else
        {
            k = 0;
        }
        v = max(v, k);
    }
    return v + 1;
}

// String
//  Input: text1 = "abcde", text2 = "ace"
//  Output: 3
//  Explanation: The longest common subsequence is "ace" and its length is 3.

// Bruteforce
int lsc(string &text1, string &text2, int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    if (text1[i] == text2[j])
        return 1 + lsc(text1, text2, i - 1, j - 1);
    else
        return max(lsc(text1, text2, i - 1, j), lsc(text1, text2, i, j - 1));
}
int longestCommonSubsequence(string text1, string text2)
{
    int m = text1.length();
    int n = text2.length();
    return lsc(text1, text2, m - 1, n - 1);
}

// Applying Memoization--> O(m*n), space-->O(m*n)+O(n+m)
int lsc(string &text1, string &text2, int i, int j, vector<vector<int>> &dp)
{
    if (i < 0 || j < 0)
        return 0;
    if (text1[i] == text2[j])
        return dp[i][j] = 1 + lsc(text1, text2, i - 1, j - 1, dp);
    else
        return dp[i][j] = max(lsc(text1, text2, i - 1, j, dp), lsc(text1, text2, i, j - 1, dp));
}
int longestCommonSubsequence(string text1, string text2)
{
    int m = text1.length();
    int n = text2.length();
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return lsc(text1, text2, m - 1, n - 1, dp);
}

// Removing Recursive Stack(Removing Space complexity O(n+m))
// Approach-->Shifting the index to right by one
    int longestCommonSubsequence(string text1, string text2) {
    int m = text1.length();
    int n = text2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    for (int i = 0; i <=m; i++)
    {
        dp[i][0] = 0;
    }
    for (int i = 0; i <=n; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (text1[i-1] == text2[j-1]){
                dp[i][j] = 1 +dp[i-1][j-1];}
            else{
                dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);}
        }
    }
    return dp[m][n];
    }

int main()
{

    return 0;
}