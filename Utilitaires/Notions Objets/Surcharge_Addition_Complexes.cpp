// Surcharge de l'opérateur addition 

#include <iostream>
using namespace std ; 

class Complex {


double re , im  ; // Par défaut ils sont privés en C++ 

public : 
    Complex (double re  , double im ) ; // Constructeur par défaut 
    Complex (const Complex & c) ; // Constructeur par copie . La méthode ne modifie pas les attributs de la classe 
    
    Complex operator+ ( Complex & ) ; // Opérateur d'addition. La reference n'est pas encore précisée 
 // Complex & operator=( const Complex & ); // opérateur d'affectation

    // Getters  
    double get_re() const { return re; }
    double get_im() const { return im; }
}; 

// Définition hors classe des la méthode d'addition et des constructeurs 

Complex::Complex (double re , double im ) {
    
    this->re  = re ; 
    this->im = im ; 
    cout << "Constructeur par defaut" << endl ; 
}


Complex::Complex (const Complex & c) { 

    re = c.re ; // La partie réelle de notre objet sera celle de l'objet passé en argument (copie)
    im = c.im  ; 
    cout << "Constructeur par copie" << endl ; 
}


Complex Complex::operator+( Complex &c ){

    cout << "Addition"<<endl; 
    return Complex( c.re + re , c.im + im ) ; // Utilisation du constructeur par défaut

    // re et im sont les attributs de l'objet courant , et c.re , c.im les attributs de l'objet passé en argument 
}


/* Complex &Complex::operator=( const Complex &c ) {
    if( &c == this ){
        return *this; }
    
    cout << "Opérateur affectation" << endl;
    re = c.re;
    im = c.im;
    return *this;
} */


int main() {
    
    Complex c1(10.0, 2.) ; 
    Complex c2(5., 2.);
    Complex c3 = c1.operator+(c2) ; // notation méthode
    cout << "c1 + c2 = " << "(" << c3.get_re() << ", " << c3.get_im() << ")" << endl;
    return 0;

}