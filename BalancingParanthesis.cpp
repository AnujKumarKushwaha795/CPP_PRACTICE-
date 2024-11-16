#include <istream>
#include <bits/stdc++.h>
using namespace std;

char Pair1(char x){

    switch(x){
        case ')': return '(';
        break;
        case '}': return '{';
        break;
        case ']': return '[';
        break;
        }
}


bool isBalanced(string s){
stack<char> sp;	

for (int i = 0; i < s.length(); ++i)
{   if(s[i]=='['||s[i]=='{'||s[i]=='(')
    {
        sp.push(s[i]);
    }
    else{
        
        if(!sp.empty()&&Pair1(s[i])==sp.top()){
            sp.pop();
            if(sp.empty()&&i==s.length()-1)
            return true;
          }
        else
        return false;  
    }
}
return false;
}

int main(){

cout<<isBalanced("[{()[]{}}]");

return 0;
}