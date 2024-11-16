#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 // My Code
    vector<int> nextLargerElement(vector<int> &arr, int n){
        // Your code here
        vector<int>v(n,-1);
int m=0;
for(int i=1;i<n;i++){
    if(arr[m]<arr[i])
    m=i;
}
int i=0,j=1;
while(j<n){
    while(arr[i]>arr[j]){
        if(j<n-1)
        j++;
    }
    while(i<j){
        v[i++]=arr[j];
          }
j++;

}
v[m]=-1;
v[n-1]=-1;
return v;  
      
 }

/*
long long maximumSum(int n,int k,vector<int> &p,vector<int> &a,vector<int> &b)
	{
        priority_queue<int>q;
        priority_queue<int>q1;
        for(int i=0;i<n;i++){
            q1.push(a[i]);
        }
	long long int s=0;
	int l=n/(k+1)+n%(k+1);
	int v=n-l;
	
	 for(int i=0;i<=v;i++){
	     q.push(-b[i]);
	 }
	for(int i=v+1;i<n;i++){
	     q.pop();
	     q.push(-b[i]);
	 }
	q.pop();
	int l1=0;
	while(l1<(n/(k+1))){
	    	int i=0;
	while(i<k)
	{
	s+=q1.top();
	q1.pop();
	i++;
	 }
	s+=(-q.top());
	q.pop();
	
	}	
	int c=0;
	while(c<(n%(k+1))){
	    s+=q1.top();
	    q1.pop();
	    c++;
	    	
	}
	return s;
	}
*/

int main(){
	// string s="ab";
 //    cout<<(int)'a';
vector<int> v={10,32,10,3,6,45,12,13,96,45,63,78,35,33,14,77};
int n=v.size();
vector<int> v1=nextLargerElement(v,n);
for(auto i:v1){
	cout<<i<<" ";
	}

	return 0;
}
