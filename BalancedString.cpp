
#include <istream>
#include <bits/stdc++.h>
using namespace std;

string BalncedString(int N){
	 int n=N,n1=N,n2=N;
        int i=0;
        string s1,s2;
 if(N%2==0){
            
            if(n<26){
               for(int j=0;j<n/2;j++){
                   char ch='a'+j;
                   s1=s1+ch;
               }
               for(int j=0;j<n/2;j++){
                   char ch1='z'-j;
                   s2=ch1+s2;
               }
              string s3=s1+s2;
              return s3; 
               
            }
            else
              { string s3="";
                   int r=(n/2)%13;
                   int d=(n/2)%13;
               for(int p=0;p<d;p++){
               for(int j=0;j<13;j++){
                   char ch='a'+j;
                   s1=s1+ch;
              
                   char ch1='z'-j;
                   s2=ch1+s2;
                  
               }
                 s3=s3+s1+s2;
                 s1="";
                 s2="";
                }
                
               for(int j=0;j<r;j++){
                   char ch='a'+j;
                   s1=s1+ch;
               
                   char ch1='z'-j;
                   s2=ch1+s2;


               }
              s3=s3+s1+s2;
              return s3; 
            }

               

             
               
           
         }
else{






}





}


int main()	
{
	
     cout<<BalncedString(100);
	

	return 0;
}