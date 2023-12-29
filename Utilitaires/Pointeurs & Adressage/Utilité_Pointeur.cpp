#include <iostream> // header in standard library
using namespace std;


// Utilité des pointeurs 

void Modify (int a ){

    a = 50 ; // Fonction avec passage d'argument par valeur .
    // Prends en argument une copie de "a" et non la variable "a" elle meme . 
    // "a" ne va valoir 50 qu'a l'interieur de la fonction uniquement 
}

void Modify( int * ptr) {

    *ptr = 50 ;  // Un pointeur en argument == on va venir directement modifier la valeur de la case memoire à laquelle
    // le pointeur "pointe" 
    // Une fois en dehors de la fonction , a vaudra 50 maintenant 
}


int main() {

    int a = 1 ; 
    Modify(a)  ;
    cout << " a vaut :" << a << endl ; // a non modifiée 
    
    int * ptr = &a ; 
    Modify(ptr) ; 
    cout << " a vaut :" << a ; // a modifiée 



    return 0 ; 
}