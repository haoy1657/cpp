


#include <iostream>
using namespace std;
#include <string>


int main( void ) {

    int a = 0 ; 
    float b =  3 ; 
    int c = rand() % 100;   // Entier aléatoire compris entre 0 et 99
    
    int * p_int = &a ; 
    float * p_float = &b ; 
    int * p_rand = &c ; 

    cout << "L'adresse de a est : " << p_int << endl ; 
    cout << "L'adresse de b est : " << p_float << endl ; 

    // Afficher la valeur stockée à l'adresse d'un pointeur 

    cout << "L'adresse du pointeur de c contient la valeur :  " << *p_rand << endl ; 



}




