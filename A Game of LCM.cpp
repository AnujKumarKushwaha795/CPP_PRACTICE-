#include <istream>
#include <bits/stdc++.h>
using namespace std;




int main()
{
	int N=5;
	long long int a;
	a=N;
	int b=N;
    N=N-1;
    int j=0;
	for(int i=0;i<3+j;i++){
//&&b/N!=0
         if(N>0&&b%N!=0)
		 a=a*(N);
		 N--;

	}
	
cout<<a;

	return 0;
}