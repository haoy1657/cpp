#include <iostream>
using namespace std ; 
#include <string>

// Interet  
// Modifier la valeur de paramètres déclarés dans le main facilement sans passer par les pointeurs 


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



void saisir( Complex &c) { // la déclaration Complex &c en argument de la fonction indique au compilateur que c est cette fois une référence
// vers un objet de type Complex.

    double r, i;
    cout << "Saisir les parties réelle et imaginaire de l'objet: ";
    cin >> r >> i;
    c.set_re( r ); // on agit ici directement sur l'objet référencé
    c.set_im( i ); // idem
}


void afficher (Complex &c) {
    cout << "c=(" << c.get_real() << " + j*" << c.get_imag() << ")" <<endl ; 
}



int main() {
    Complex c1; // Objet c1 de type complexe 
    // Complex &c = c1 ;  // création d'une reférence 
    
    saisir( c1 );
    
    afficher( c1 );
    return 0;
}
