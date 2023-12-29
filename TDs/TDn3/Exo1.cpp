// EXO1 , TDn3 

#include <iostream>
#include <string>
using namespace std ; 


int maMultiplication (int & entier  , int * ptr){

    return *(ptr) * entier ; 
}



// in C++, when the ref-sign (&) is used before the function name in the declaration of a function it is associated with the return value
// of the function and means that the function will return by reference

int & Greater ( int & entier, int*ptr ){
    if(entier > *ptr){return entier ; }
    return *ptr; 
}


// Pour tester la reference 
void retour(int & entier ){ 
     entier *= 3 ; 

}



int main() {



    int entier = 7  ; // Variable originale 
    // int & ent = entier  ; // Toute operation faite sur cette varaible de reference sera en réalité aussi faite sur l'originale
    int * ptr = new int(2) ; 

    cout << "Le resultat de la multiplication est : " << maMultiplication(entier , ptr) <<endl ; 
    cout << "Le plus grand : " << Greater(entier , ptr) ; 
    cout <<endl << endl ; 
    // Test 
    retour(entier) ; 
    cout << "Apres modification de la variable 'entier' (fonction retour) " << entier ; 


    
    
    
    delete ptr ; 

    return 0 ; 

}