#include <iostream>
#include <string>
using namespace std ; 


void pow( int & v){
    v*=v ;  // Elève au carré 
}

void pow2( int v){
    v*=v ;  // Elève au carré 
}


int main () {


    int var = 2 ;  

    cout << "var avant modification : " << var << endl ; 
    
    pow2(var) ; 
    cout << "var en argument de pow2  : " << var << endl ; 

    pow(var) ; 
    cout << "var en argument de pow (Adressage reference) : " << var<< endl ; 
    
    //cout << "ref en argument de pow  : " << pow(ref) << endl ; 


    return 0 ; 
}