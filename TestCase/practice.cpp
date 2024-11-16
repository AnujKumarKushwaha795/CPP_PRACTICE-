#include<bits/stdc++.h>
using namespace std;
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countZeros(const string& s, int index) {
    int count = 0;
    for (int i = 0; i <= index; i++) {
        if (s[i] == '0') {
            count++;
        }
    }
    return count;
}

vector<int> solution(string& binaryString, const vector<string>& requests) {
    int count = countZeros(binaryString, binaryString.size() - 1);
    vector<int> answers;

    for (const string& request : requests) {
        if (request.substr(0, 6) == "count:") {
            int index = stoi(request.substr(6));
            answers.push_back(countZeros(binaryString, index));
        } else if (request == "flip") {
            for (char& c : binaryString) {
                if (c == '0') {
                    c = '1';
                } else {
                    c = '0';
                }
            }
            count = binaryString.size() - count;
        }
    }

    return answers;
}

int main() {
    string binaryString = "1111010";
    vector<string> requests = {"count:4", "count:6", "flip", "count:4", "flip", "count:2"};

    vector<int> result = solution(binaryString, requests);

    for (int ans : result) {
        cout << ans << " ";
    }
    cout << endl;

    return 0;
}





// bool rotateArr(vector<int>&arr, int d, int n,vector<int>& sortedArray){
//         vector<int> a(n,0);
//         for (int i = 0; i < n; i++)
//         {
//             a[i]=arr[i];
//         }        
//         int k=-1;
//         if(d>n){
//             d=d%n;
//             k=d/n;
//         }
//             if(k!=-1 && k&1) reverse(a.begin(),a.end());
//             int i=0;
//             int j=n-d;
//           reverse(a.begin(),a.begin()+d);
//           reverse(a.begin()+d,a.end());
//           reverse(a.begin(),a.end());
//         for (int i = 0; i < n; i++)
//         {
//             if(sortedArray[i]!=a[i])
//             return false; 
//         }
//         return true;     
//     }

// bool fun()
// {
//     vector<int>v{5,2,3,4,1};
//     vector<int>sortedArr(v);
//     sort(sortedArr.begin(),sortedArr.end());
//     int n=v.size(),t=3;
//    for(int i=1;i<=t;i++)
//    {
//      if(rotateArr(v,i,n,sortedArr))
//      return true;
//    }
//    return false; 
// }



// vector<int> newArray(vector<int> &arr,int n)
// {
//     int i=0,j=n-1,k=0;
//     vector<int>v(n,0);
//     while (i<j)
//     {
//         v[k++]=arr[i++];
//         v[k++]=arr[j--];
//     }
//     if(n&1)
//     v[k]=arr[i];

//     for (int i = 0; i < n; i++)
//     {
//         cout<<v[i]<<"--";
//     }
    
//     return v;
// }



    

// int main(int argc, char const *argv[])
// {
//    vector<int>v{1,2,3,4,5};
// //    cout<<(v,5);
//  newArray(v,5);


    
    
//     return 0;
// }
