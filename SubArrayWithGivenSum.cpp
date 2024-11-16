// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int SumA(vector<int>&arr,int x,int s,int i){
    if(s==x)
    return 1;
    if(i<6){
    SumA(arr,x,s+arr[i],i+1);
    SumA(arr,x,s,i+1);
    }
//    if(i==6&&s!=x)
//    return 0;
    
}
int main() {
    // Write C++ code here
    //cout << "Hello world!";
vector<int>arr={3,34,4,12,5,2};
int sum=9;
cout<<SumA(arr,9,0,0)<<endl;
    return 0;
    
}