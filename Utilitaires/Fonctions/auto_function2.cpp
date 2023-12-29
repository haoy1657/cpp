#include <iostream>
#include <string>
#include <vector>
using namespace std ; 



// auto peut determiner automatiquement le type d'une variable 

void test() {

    auto a = 5 ; 

    auto b = a ; 

     cout << "a : " << a << " typeid : " <<  typeid(a).name() << endl ; 
    cout << "b : " << b << " typeid : " <<   typeid(b).name() << endl ; 


}

// char *name;
// This means that you just declared the pointer variable where you’ll store the address of the first character in your string.
// It’s useful when you want a string with unknown length.

char* GetName(){

    return "Hi" ; 
}

string GetName2(){

    return "Hi" ; 
}





int main() {

    // auto name = GetName()  ; Le name.size() ne marchera pas si le type de retour est un char *

    auto name = GetName2() ; 

    int a = name.size() ; 
    cout << a << endl ; 

    // Attention:  Ne pas mentionner le type de retour peut parfois induire érreur si le code est assez long
    
    /*--------------------------------------------------------*/

    vector<string> fruits = {"apple" , "banana" , "orange"} ; 
    cout << fruits.at(1) << endl ; 
    
    // print all elements 

    // vector<string>::iterator it = fruits.begin() ;
    auto it = fruits.begin() ; 
    // This function returns a bidirectional iterator pointing to the first element.
    
    cout << "first element : " <<  *it << endl << endl ; 

    for (it ; it!= fruits.end() ; it++){ cout << *it << endl ; }
    
    return 0 ; 

}