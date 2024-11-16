// C++ program to demonstrate
// multithreading using three
// different callables.
#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;
/*
When you write using namespace std;, you are telling the compiler to look for identifiers in the std namespace without needing to prefix them with std::. This simplifies the code but can lead to potential naming conflicts, especially in larger projects
*/


/*
Buffering: The key difference is that std::endl not only inserts a newline character but also flushes the output buffer. This means that any buffered output is immediately sent to the output device (e.g., console or file).

Usage: It is used specifically with output streams (like std::cout), and it is typically used when you want to ensure that all output is displayed immediately.
*/

// A dummy function
void foo(int Z)
{
    for (int i = 0; i < Z; i++)
    {
        sleep(1);
        cout << "Thread using function"
                " pointer as callable"
             << i << endl;
    }
}

// A callable object
class thread_obj
{
public:
    void operator()(int x)
    {
        for (int i = 0; i < x; i++)
        {
            sleep(1);
            cout << "Thread using function"
                    " object as callable"
                 << i << endl;
            fflush(stdout);
        }
    }
};
/*
Callable Objects: In C++, any object that has an overloaded operator() can be used as a callable object (or functor). This means that when you create a thread using such an object, the thread will call the operator() method of that object.

class thread_obj {
public:
    void operator()() { // Overloaded operator()
        for (int i = 0; i < 5; i++) {
            sleep(1); // Sleep for 1 second
            cout << "Thread is running: " << i << endl;
        }
    }
};
int main() {
    thread_obj obj; // Create an instance of thread_obj
    thread th(obj); // Pass the object to the thread constructor

    th.join(); // Wait for the thread to finish
    return 0;
}
*/

// class definition
class Base
{
public:
    // non-static member function
    void foo()
    {
        sleep(1);
        cout << "Thread using non-static member function as callable" << endl;
    }
    // static member function
    static void foo1()
    {
        sleep(1);
        cout << "Thread using static member function as "
                "callable"
             << endl;
    }
};


// Driver code
int main()
{
    cout << "Threads 1 and 2 and 3 "
            "operating independently"
         << endl;

    // This thread is launched by using
    // function pointer as callable
    thread th1(foo, 10);

    // This thread is launched by using
    // function object as callable
    thread th2(thread_obj(), 10);

    // Define a Lambda Expression
    auto f = [](int x)
    {
        for (int i = 0; i < x; i++)
            cout << "Thread using lambda"
                    " expression as callable"
                 << i << endl;
    };

    // This thread is launched by using
    // lambda expression as callable
    thread th3(f, 10);

    // object of Base Class
    Base b;

    thread th4(&Base::foo, &b);

    thread th5(&Base::foo1);

    // Wait for the threads to finish
    // Wait for thread t1 to finish
    th1.join();

    // Wait for thread t2 to finish
    th2.join();

    // Wait for thread t3 to finish
    th3.join();

    // Wait for thread t4 to finish
    th4.join();

    // Wait for thread t5 to finish
    th5.join();

    return 0;
}

/*
int main(){
    thread_obj obj;
    cout<<&obj<<endl;

return 0;
}
*/