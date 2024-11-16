// C++ program to illustrate tight coupling problem
// in object creation
#include <iostream>
using namespace std;

// ----- LIBRARY CODE START FROM HERE -----
class Base {
  public:
    Base() {}

    // Ensures to invoke actual object destructor
    virtual ~Base() {
        cout << "Base class destructor called." << endl;
    }

    // An interface
    virtual void DisplayAction() = 0;

    /*
    if we write virtual destructor
    then it will ensure that the correct destructor of the actual object is called
    Output:
    Derived1 created
    Action from Derived1
    Derived1 destroyed
    Base class destructor called.
    User destructor called

    Output without virtual destructor:
    Derived1 created
    Action from Derived1
    Base class destructor called.
    User destructor called
    */

   /*
   Note: destructor is called before destroy of object.
   that's why first child class destructor is called 
   because first child class object ends its task then parent end.

   but in case of early binding compiler calls 
   the destructor that is early binded during complie time.
   for avoiding this we use virtual destructor.
   */
};

class Derived1 : public Base {
  public:
    Derived1() {
        cout << "Derived1 created" << endl;
    }

    ~Derived1() {
        cout << "Derived1 destroyed" << endl;
    }

    void DisplayAction() {
        cout << "Action from Derived1" << endl;
    }
};

class Derived2 : public Base {
  public:
    Derived2() {
        cout << "Derived2 created" << endl;
    }

    ~Derived2() {
        cout << "Derived2 destroyed" << endl;
    }

    void DisplayAction() {
        cout << "Action from Derived2" << endl;
    }
};
// ----- LIBRARY CODE ENDS HERE -----

class User {
  public:
  
    // Always creates Drived1
    User() : pBase(nullptr) {
        pBase = new Derived1();
        // but what if Derived2 is required? - Add an if-else ladder (see next sample)
    }

    ~User() {
        if (pBase) {
            delete pBase;
            pBase = nullptr;
        }
        cout<<"User destructor called"<<endl;
    }

    // Delegates to actual object
    void Action() {
        pBase->DisplayAction();
    }

  private:
    Base *pBase;
};

int main() {
    User *user = new User();

    // Need Derived1 functionality only
    user->Action();

    delete user;
}


