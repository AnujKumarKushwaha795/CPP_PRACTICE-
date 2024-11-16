
#include <istream>
#include <bits/stdc++.h>
using namespace std;


int GCD(int a,int b){
    if(b==0)
	return a;
    else
    GCD(b,a%b);
}

// Seive of Erato Sthenes

vector<bool> &SeiveOfEratoSthenes(vector<bool> &isPrime,int n){	
// vector<bool> isPrime(n+1,true);

isPrime[0]=false;
isPrime[1]=false;
for (int i = 2; i*i <=n; ++i)
{
  for (int j = 2*i; j<=n;j+=i)
   {
	isPrime[j]=false;
   }
}
return isPrime;
}


int main(int argc, char const *argv[])
{ 
	cout<<"GCD="<<GCD(65,15)<<endl;
    vector<bool> v1(8180,true);
    vector<bool> v=SeiveOfEratoSthenes(v1,8179);
    
for (int i = 1; i < 8179; ++i)
{
	if(v[i]==true)
		cout<<i<<" ";
}

// for(auto i:v){
//     if(i==true)
//     cout<<i<< " ";
// }
	return 0;

}


