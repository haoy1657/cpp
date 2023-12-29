#include <iostream>
using namespace std ; 
#include <string>

// On a vu précedemment que sans le constructeur , les attributs étaient initialisés avec une valeur de réf et que pour leur donner 
// une valeur , on passait alors par les setters . 
// Cette fois ci , on va directement les initialiser avec le constructeur de la classe


// I / Constructeur par défaut 


/* class Complex { 
    private : 
        double re ; // Partie reélle 
        double im ; // Partie Im 
    
    // Le constructeur de base  

    public : 
        Complex() {
            // Initialisation Standard 
            im = 0;  
            re = 0 ; 
            cout << " Constructeur par defaut" ; 
            }
}; 


int main() {

    Complex c ; // Objet de type complexe 

}
 */








// Constructuer spécifique  

/* class Complex { 
    private : 
        double re ; // Partie reélle 
        double im ; // Partie Im 
    
    // Le constructeur de base  

    public : 
        Complex(double _re , double _im) {
            // Initialisation Standard 
            re= _re;  
            im = _im ; 
            cout << " Constructeur specifique" << endl ; 
            }

        // Getters  


        double get_re() { return re; } 
        double get_im() { return im ; }
}; 


int main() {

    Complex c1 (1.55 , 2.0) ; // Objet de type complexe défini directement avec le constructeur 

    // Si on veut procéder à l'affichage , il va falloir passer les accèsseurs et notamment le getter pour autoriser l'acces en lecture 

    cout << "c1 = ( " << c1.get_re() << " + j*" << c1.get_im() << " )" << endl ; 


} */






// Constructuer pour éviter la surcharge : 


class Complex {
    public: // On évite les getters et setters pour cet exemple 
        double im; double re;
    public:
        Complex( double _re=0, double _im=0 ) { // unique constructeur
            re = _re;
            im = _im;
        }

    void afficher() { 

         cout << "c=(" << re << " + j*" << im << ")"<<endl ; 
    }
};


int main() {
    Complex c1; // initialisation par défaut
    Complex c2( 1. ); // initialisation spécifique (réel pur)
    Complex c3( 1., 2. ); // initialisation spécifique

    c1.afficher() ; 
    c2.afficher() ; 
    c3.afficher() ; 


}