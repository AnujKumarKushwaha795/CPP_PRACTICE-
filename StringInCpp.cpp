#include <istream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
vector<char> v;
v.push_back('A');
v.push_back('n');
v.push_back('u');
v.push_back('j');
v.push_back(' ');
v.push_back('K');
v.push_back('u');
v.push_back('m');
v.push_back('a');
v.push_back('r');
string str(v.begin(),v.end());
cout<<str<<endl;
cout<<"size="<<str.size()<<" "<<"Length="<<str.length()<<" "<<"Capacity="<<str.capacity()<<endl;
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
v.pop_back();
string strr(v.begin(),v.end());
reverse(strr.begin(),strr.end());
str=strr;
cout<<str<<endl;

return 0;
}


