#include <istream>
#include <bits/stdc++.h>
using namespace std;
// This is correct.
string BalncedString(int N){

string str="abcdefghijklmnopqrstuvwxyz";
int n=N;
string s1;
string res;

if(N%2==0){
int a=N/26;
int r=N%26;
while(a){
	res+=str;
	a--;
}
res+=str.substr(0,r/2);
res+=str.substr(26-r/2,26);
return res;
}

else{
int s=0;
while(n){
	s+=n%10;
	n=n/10;
}
if(s%2==0){

int b=N/26;
int r=N%26;
int f=r/2+1;
int f1=r/2;
while(b){
	res+=str;
	b--;
}
res+=str.substr(0,f);
res+=str.substr(26-f1,26);
return res;



}else{


int b=N/26;
int r=N%26;
int f=r/2;
int f1=r/2+1;
while(b){
	res+=str;
	b--;
}
res+=str.substr(0,f);
res+=str.substr(26-f1,26);
return res;

}

}


}










int main()
{



// string str="abcdefghijklmnopqrstuvwxyz";

// string s1=str.substr(0,13);
// cout<<s1<<endl;
cout<<BalncedString(29);

	// float a=5.5;
	// cout<<ceil(a)<<endl;
	return 0;
}