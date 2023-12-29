#include <iostream> // header in standard library
using namespace std;


// Utilité des pointeurs 

void Modify (int a ){

    a = 50 ; 
}


int main() {

    int a = 1 ; 
    Modify(a)  ;

    cout << " a vaut  :" << a ;



    return 0 ; 
}