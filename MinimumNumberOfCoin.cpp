// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

    vector<int> minPartition(int N)
    {        
        vector<int> v;
        int a=N,b,c,d,e,f,g,h,i,j,k;
       while(a){
      
        if(a>=2000)
       { b=a/2000; a=a%2000;
            while(b){
           v.push_back(2000);
           b--;
       }
       }
        else if(a>=500&&a<2000)
      {  c=a/500;  a=a%500;
           while(c){
           v.push_back(500);
           c--;
       }
      }
        else if(a>=200&&a<500)
       { 
           d=a/200; a=a%200;
            while(d){
           v.push_back(200);
           d--;
       }
       }
        else if(a>=100&&a<200)
       {
           e=a/100;  a=a%100;
           
       while(e){
           v.push_back(100);
           e--;
       } 
       }
       
        else if(a>=50&&a<100)
       { f=a/50;  a=a%50;
             while(f){
           v.push_back(50);
           f--;
       }
       }
        else if(a>=20&&a<50)
       { g=a/20;  a=a%20;
           
       while(g){
           v.push_back(20);
           g--;
       }
       }
        else if(a>=10&&a<20)
       { h=a/10;  a=a%10;
            while(h){
           v.push_back(10);
           h--;
       }
       }
        else if(a>=5&&a<10)
       { i=a/5;  a=a%5;
             
       while(i){
           v.push_back(5);
           i--;
       }
       }
        else if(a>=2&&a<5)
        { j=a/2;  a=a%2;
              while(j){
           v.push_back(2);
           j--;
       }
        }
        else
          { k=a;
           v.push_back(1);
          
          }
       }
       return v;
     }


int main() {
    // Write C++ code here
    cout << "Hello world!";
   vector <int> b(minPartition(43));
   for(int i:b){
       cout<<i<<" ";
   }
  
    return 0;
}