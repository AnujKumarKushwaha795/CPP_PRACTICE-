#include <istream>
#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        int m=INT_MAX;
        int s=0,p=0,q=0,r=0;
         for (int i = 0; i < arr.size(); i++)
         {   
            for (int j = i+1; j < arr.size(); j++)
            {
                for (int k = j+1; k < arr.size(); k++)
                {  s=arr[i]+arr[j]+arr[k];
                    if(abs(s-target)<=m){
                         m=min(m,s-target);
                         p=i;
                         q=j;
                         r=k;
                    }
                }               
            }
         }
         return arr[p]+arr[q]+arr[r]; 
    }


int main(int argc, char const *argv[])
{
    vector<int>v={5,2,7,5};
    cout<<threeSumClosest(v,2);
    return 0;
}
