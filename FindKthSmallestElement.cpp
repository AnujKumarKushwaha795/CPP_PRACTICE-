#include <istream>
#include <bits/stdc++.h>
using namespace std;

int Partition(vector<int>&arr,int l,int h){
    int i=l,j=h;
    int pivot=arr[l];
    while(i<j){

    do{
        i++;
    }while(arr[i]<pivot);
    do{
        j--;
    }while(arr[j]>pivot);
    
    if(i<j)
    swap(arr[i],arr[j]);

}
    swap(arr[l],arr[j]);

  return j;
}

   vector<int> &QuickSort(vector<int>&arr, int l,int h){  
    if(l<h){
        int j=Partition(arr,l,h);
        QuickSort(arr,l,j);
        QuickSort(arr,j+1,h);
    }
    return arr;
}


int Maxi(vector<int>&arr,int l,int h){
    int m=arr[l];
for (int i = l+1; i < h; i++)
{
    m=max(m,arr[i]);
}
return m;
}

int KthSmallestElement(vector<int>&arr,int l,int h,int k){
   int m=0;
   int j=Partition(arr,l,h);
   if(j<k)
   KthSmallestElement(arr,j,h,k);
   else if(j==k){
    m=Maxi(arr,0,j);
   }
   else{
   KthSmallestElement(arr,l,j,k);
   }
  return m;
}

int main(int argc, char const *argv[])
{
    vector<int> arr={10,5,8,12,15,6,7,3,9,16};
    // cout<<KthSmallestElement(arr,0,9,5)<<endl;
    // cout<<endl<<Partition(arr,0,9)<<endl;
    cout<<Maxi(arr,3,6)<<endl;
    vector<int>a=QuickSort(arr,0,9);
    for(auto i:a){
        cout<<i<<" ";
    }

    
    return 0;
}
