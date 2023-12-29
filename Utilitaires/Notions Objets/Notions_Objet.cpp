#include <iostream>
using namespace std;
#include <string>


/* 

class Complex {
private: // Attributs privés
    double re ; 
    double im ; 
  
public: 
    // Getters (Accés en Lecture)
    double get_real() const {return  re ; }
    double get_imag() const {return im; }
    // Setters (Accés en Ecriture)
    void set_re( double r) { re = r; } // Valeure de la partie réelle en argument 
    void set_im( double i) { im = i; }
};

int main( void ) {
Complex c; // Objet de type Complexe

// Ecriture 
c.set_re(1.) ;  
c.set_im(3.3) ; 

// Lecture 
cout << "c=(" << c.get_real() << " + j*" << c.get_imag() << ")" ; 
return 0 ; 
}

 */







// En utilisant les pointeurs 

class Complex {
private: // Attributs privés
    double re ; 
    double im ; 
  
public: 
    // Getters (Accés en Lecture)
    double get_real() const {return  re ; }
    double get_imag() const {return im; }
    // Setters (Accés en Ecriture)
    void set_re( double r) { re = r; } // Valeure de la partie réelle en argument 
    void set_im( double i) { im = i; }
};

int main( void ) {
Complex c; // Objet de type Complexe
Complex * pointeur = &c ; // // déclaration d'une variable pointeur qui pointe à l'adresse de l'objet 



// Ecriture (Setters) 
// Lorsque l’on manipule un objet par son adresse, on utilise l’opérateur -> et non pas le point pour accéder aux attributs
// ou aux fonctions membres de l’objet.
pointeur->set_re(1.) ;  
pointeur->set_im(3.3) ; 

// Lecture 
cout << "c=(" << pointeur->get_real() << " + j*" << pointeur->get_imag() << ")" << endl ; 
return 0 ; 
}
