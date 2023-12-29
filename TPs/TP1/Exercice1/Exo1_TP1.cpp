// C++ , TP n°1 
// Exercie 1 

#include <iostream>
using namespace std;

// Rappel : Un pointeur sur un entier correspond donc à l'addresse de cet entier


int main() {


// Définir un pointeur sur un entier, nommé p
int a ; 
int *p = &a ; 

//un pointeur sur un entier constant, nommé q
int const b = 10 ; // Cette valeur ne vas plus bouger
const int *q = &(b) ; // Le quantificateur const veut dire que l'ensemble ne vas plus bouger

// Un pointeur sur un objet ne doit pas pointer sur un objet constant.



// un pointeur constant sur un entier, nommé r
int c = 14 ; 
int const *r = &c ; // Valeur de p non modifiable 


// Faites des allocations avec l’opérateur new. Que constatez-vous ?


cout << *q << " A l'adresse " << &q ; 


}