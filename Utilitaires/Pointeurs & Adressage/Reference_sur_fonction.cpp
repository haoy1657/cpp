// Reference sur une fonction 
// Règles : la variable retournée doit etre une variable globale 


#include <iostream>
using namespace std ; 


int a = 0 ; 
int res = 0  ;  

// Retourne une reference sur une variable globale  

int& func(){
    return a ; 
}

int& func2 (int& var) {
 
    res = var*var ; 
    var += 5 ;
    return res ; 

     
}

int main () {


    cout << "Valeur de a : " << a << endl ; 
    /*---------------------------------------------*/ 

    func() = 10 ; 

    cout << "Nouvelle valeur de a : " << a << endl ;

     
     /*---------------------------------------------*/ 

     cout << "Valeur de res : " << res << endl ; 
     int b = 2 ; 
    
     // b sera modifiée 
     func2(b) = 3 ; 
     cout << "Nouvelle valeur de res : " << res << endl ;
     cout << "Nouvelle valeur de b : " << b << endl ;





    return 0 ; 
}



