#include <istream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter value of n:"<<endl;
	cin>>n;

	int catalon[n+1]={0};
     catalon[0]=1;
     catalon[1]=1;
     for (int i = 2; i < n+1; ++i)
     {
     	for (int j = 0; j < i; ++j)
     	{
     		catalon[i]=catalon[i]+catalon[j]*catalon[i-j-1];
     	}

     }

     for(auto i:catalon)
	cout<<i<<endl;

	return 0;
}


