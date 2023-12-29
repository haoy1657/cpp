// Function to dedudce the type of a declared variable from its initialization expression 

#include <iostream>
#include <string>
#include <vector> 

using namespace std ; 


void reportIDtype (auto var){

    string strID = typeid(var).name() ; 
    cout << "var : " << var << " typeid : " << strID << endl ; 
}

int main () {

    // boolean 
    auto type = true ; 
    reportIDtype(type) ; 

    // integer 
    auto type_int = 2016 ; 
    reportIDtype(type_int); 

    // float 
    auto type_f = 3.14 ; 
    float type_f2 = 3.56 ; 
    reportIDtype(type_f) ; 
    reportIDtype(type_f2) ; 

    // pointer 
    auto ptr = &type_f ; 
    reportIDtype(ptr) ; 

    // string
    auto type_str = "hi" ; 
    reportIDtype(type_str) ; 

    return 0 ; 

}

// OUTPUT 

/* var : 1 typeid : b   
var : 2016 typeid : i
var : 3.14 typeid : d
var : 3.56 typeid : f
var : 0x7bfdf8 typeid : Pd
var : hi typeid : PKc */