#include <bits/stdc++.h>

using namespace std;

vector<int> &divVecByRef(vector<int> &v){
    
    for(int i=0; i<v.size(); i++)
        v[i] /= 10;
    
    return v;
}


int main(){

    vector<int> v = {10, 20, 30, 40, 50};

    cout << "Original Vector: ";
    for(auto a:v)
        cout << a << " ";
    cout << endl;

    vector<int> v2 = divVecByRef(v);

    cout << " Resultant vector: ";
    for(auto a:v2)
        cout << a << " ";
    cout << endl;

    return 0;
}