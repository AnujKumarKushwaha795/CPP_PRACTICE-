#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

template <class T> class SmartPtr {
    T* ptr; // Actual poTer
    public:
    // Constructor: Refer
    // https://www.geeksforgeeks.org/g-fact-93/ for use of
    // explicit keyword
    explicit SmartPtr(T* p = NULL) { ptr = p; }
    
    // Destructor
    ~SmartPtr() { delete (ptr); }
    // Overloading dereferencing operator
    T& operator*() { return *ptr; }
    
    // Overloading arrow operator so that
    // members of T can be accessed
    // like a pointer (useful if T represents
    // a class or struct or union type)
    T* operator->() { return ptr; }
};

void smart_pointer(){
    SmartPtr<int> ptr(new int());
    *ptr = 20;
    cout << *ptr<<endl;
// We don't need to call delete ptr: when the object
// ptr goes out of scope, the destructor for it is
// automatically called and destructor does delete ptr.
}



int main()
{
    smart_pointer();
    // int *a;
    // int b=20;
    // a=&b;
    // cout<<a<<endl;
    
    
    
    
return 0;
}
