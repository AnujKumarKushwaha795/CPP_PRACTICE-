#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;
int main(){

int arr[]={5,4,1,4,8,5,1,3};
int res=0,x=0,count=0,b=0;

for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
{
  res=res^arr[i];
}
 // cout<<res<<" "<<x<<endl;
while(!(res&(1<<count))){
 ++count;
}
b=b|(1<<count);
 //cout<<count<<" "<<b<<endl;

for(int i=0;i<8;i++)
{  
	if(arr[i]&b)
    x=x^res^arr[i];
}
cout<<x<<" "<<(res^x);

	return 0;
}
