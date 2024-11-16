#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// Recursion method      Time-Complexity=O(2^n) and Space Complexity=O(n)
int NonAdjSum(vector<int> &arr,int n){
    if(n<0)
    return 0;
    if(n==0)
    return arr[0];
        int incl=NonAdjSum(arr,n-2)+arr[n];
        int excl=NonAdjSum(arr,n-1)+0;
        return max(incl,excl);       
} 
// Recursion + Memoization. Time-Complexity=O(n) and Space Complexity=2O(n)
int NonAdjSum1(vector<int> &arr,int n,vector<int>&dp){
    dp[0]=arr[0];
    if(dp[n]!=-1)
    return dp[n];
        int incl=NonAdjSum(arr,n-2)+arr[n];
        int excl=NonAdjSum(arr,n-1)+0;
        dp[n]=max(incl,excl); 
        return  dp[n];     
}
// Tabulation Method   Time-Complexity=O(n) and Space Complexity=O(n)
int NonAdjSum2(vector<int> &arr,int n,vector<int>&dp){
if(n==0)
return arr[0];
if(n==1)
return max(arr[0],arr[1]);

    dp[0]=arr[0];
    dp[1]=max(dp[0],arr[1]);
    for (int i = 2; i <=n; i++)
    {
       int incl=dp[i-2]+arr[i];
       int excl=dp[i-1]+0;
       dp[i]=max(incl,excl);
    }
    return dp[n];     
}
// Optimization Method    Time-Complexity=O(n) and Space Complexity=O(1);
int NonAdjSum3(vector<int> &arr,int n){
if(n==0)
return arr[0];
if(n==1)
return max(arr[0],arr[1]);

    int prev2=0;
    int prev1=arr[0];
     int ans;
    for (int i = 1; i <=n; i++)
    {
        int incl=prev2+arr[i];
        int excl=prev1+0;
        ans=max(incl,excl); 
        prev2=prev1;
        prev1=ans;
    }
    return ans;     
}

int main(int argc, char const *argv[])
{
    vector<int> arr={9,9,8,2};
     cout<<NonAdjSum(arr,3)<<endl;
     vector<int>dp(4,-1);
     cout<<NonAdjSum1(arr,3,dp)<<endl;
     cout<<NonAdjSum2(arr,3,dp)<<endl;
     cout<<NonAdjSum3(arr,3)<<endl;


    return 0;
}
