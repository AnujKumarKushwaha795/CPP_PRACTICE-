#include <iostream>
#include<vector>
// using namespace std;

int maxGroupSize(int arr[], int N, int K) {
        // code here
  int s=0;
  std::vector<int> v;
  v.push_back(arr[0]);
  for(int i=1;i<N;i++)
  {   for(int j=0;j<v.size();j++)
      if((v[j]+arr[i])%K!=0)
      {  if(j==v.size()-1)
         v.push_back(arr[i]);
      }
      else
        break ;
  }
  s=v.size();
return s;
}


int main() {
    // Write C++ code here
   // cout << "Hello world!";
  int a[]={1,2,7,6};
  std::cout<<maxGroupSize(a,4,8);
    return 0;
}