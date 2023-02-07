//
//  main.cpp
//  PracticeWithTheOverrideSpecifier
//
//  Created by Kimberly Young on 29/01/2023.
//

#include <iostream>

class Base{
public:
    virtual void say_hello() const{
        
        std::cout << "Hello from the base class" << std:: endl;
    }
    
    virtual ~Base(){
        
    }
};

class Derived : public Base{
    
public:
    virtual void say_hello(){
        // --- ^ notice I forgot the const, NOT OVERRIDING
        
    // virtual void say_hello() const override{
        //---^ swap line 25 out with this and notice what happens with the output!
        
        
        
    //virtual void say_hello() override{
        // ---^ now swap with this line, it wont work  BUT that is why we love the override specifier, it is a keyword that we put in there so the compiler knows we intend to override something, and it will throw us an error if we do something silly like forget the const or make a mistake with writing the function
        std::cout << "Hello from the derived class" << std:: endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Base *obj = new Derived;
    
    obj->say_hello();
    
    delete obj;
    return 0;
}
