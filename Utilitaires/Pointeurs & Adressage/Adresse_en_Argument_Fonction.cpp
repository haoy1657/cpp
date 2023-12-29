#include <iostream>
using namespace std ; 
#include <string>



// Interet de passer par les pointeur pour une fonction en dehors du main : 
// Modifier la valeur de paramètres déclarés dans le main facilement 

/* Un exemple simple : 

void Foo( int*b )  
{ 
// prend un pointeur en entrée 

  *b= 50 ; // "*" signifie que l'on veut modifier le contenu à l'adresse de b
}



int main ()
{

    int a = 0 ; // Initialisation 
    Foo(&a) ; 
    cout << "la valeur de a est : " << a << endl ; 
    return 0 ; 

}
 
 */









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


void saisir( Complex *ptr) { // Pointeur en argument 
    double r, i;
    cout << "Saisir les parties réelle et imaginaire de l'objet: ";
    cin >> r >> i;
    ptr->set_re( r );
    ptr->set_im( i );
}

// Note : Cette fonction connaît l’adresse de l’objet (et non pas l’objet lui-même)


void afficher (Complex * ptr ) {

  cout << "c=(" << ptr->get_real() << " + j*" << ptr->get_imag() << ")" << endl ; 

}



int main( void ) {
    Complex c1; // Objet de type Complexe
    Complex * ptr = &c1 ; // Pointeur à l'adresse de l'objet 
    
    // Ecriture (Setters) 
    saisir(ptr) ; // Adresse de l'objet c1 

    // Lecture 
    afficher(ptr) ; 
    return 0 ; 
}
