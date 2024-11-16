#include <istream>
#include <bits/stdc++.h>
using namespace std;


int main()
{ 
	int arr[]={4,3,-2,6,-14,7,-1,5,7,-10,2,9,-10,-5,-9,6,1,1};
	int sum=arr[0];
	int currSum=arr[0];
	int initial=0;
	int final=0;
    int a=0;
	for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); ++i)
	{
 		sum+=arr[i];
       

		if (sum>currSum)	
		{
			currSum=sum;
			final=i;
			initial=a;
		}

        if (sum<arr[i])
        {
        	sum=arr[i];
            a=i;
        }

       
	}
	cout<<"initial="<<initial<<" final="<<final<<endl<<" Max Sum="<<currSum;
	
	return 0;
}

