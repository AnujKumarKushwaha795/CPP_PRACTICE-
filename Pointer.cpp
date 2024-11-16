#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a=5;
//	int arr[5]={5,6,8,10,12};
	array<int,5> arr={5,6,8,10,12};
	int *p=arr+4;
	int **q=&p;
	int *(ptr[5]);
	ptr[0]=arr;
	
	cout<<*ptr<<endl;
	//<<*(ptr+1)<<*(ptr+2)<<endl<<*(ptr+3)<<endl<<*(ptr+4)<<endl;
	cout<<arr<<endl<<arr+1<<endl;
	
	//**q=&p;
//	**q=15;
//	cout<<"addres of p="<<&p<<endl<<*q<<endl<<p<<endl<<"arr[4]="<<*p<<endl;
//	cout<<p<<endl;
//	cout<<arr<<endl;
//	cout<<*p<<endl<<"Size of array:"<<endl<<sizeof(arr)/sizeof(arr[0]);
//	cout<<endl<<"Size of pointer:"<<endl<<sizeof(p);
	cout<<"Print vlues of array:"<<endl;
	for(int i:arr)
{
		cout<<i<<endl;
}
	
}
