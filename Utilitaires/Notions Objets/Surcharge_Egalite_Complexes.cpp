#include <iostream>
using namespace std ; 


// Surcharge de l'operateur d'affectation pour deux objets de type complexe
class Complex {

    public : 
        double re ; 
        double im ; 
    
    public : 

        // Constructeur 
        Complex(double re = 0 , double im = 0 ); 
        // Surcharge 
        void operator=(const Complex &) ; // Ref à un autre nombre complexe 
        //Affichage 
        void Str() { cout << "Partie reelle : " << this->re << " ; Partie Imaginaire :" << this->im <<endl ; }
        // Equivaut à 
        // void Str() { cout << "Partie reelle : " << (*this).re << " ; Partie Imaginaire :" << (*this).im <<endl ; }
        // this == notre objet , du moins son adresse car htis désigne le pointeur sur l'objet
        // *this == le contenu à l'adresse de l'objet donc l'objet lui meme.


} ; 


Complex::Complex(double re , double im ){
    
    this->re = re ; 
    this->im = im ; 
}


// Surcharge de l'operateur insertion de flux 
ostream & operator << ( ostream & o , Complex & c ) {



    o << "Partie reelle : " << c.re << " ; Partie Imaginaire :" << c.im <<endl ;
    return o ; 

    }



// Class Type Function (sauf pour le constructeur car il ne renvoie rien)
void Complex::operator=(const Complex & c){

    this->re = c.re ; 
    this->im = c.im ; 
    //cout << "Surcharge de l'operateur '=' "<< endl ;  ; 

}


int main() {

    Complex C1() ; 
    Complex C2(3.4 , 1.02); 
    Complex C3; 

    C3.Str() ; // le "->" pour les objets uniquement alloués dynamiquement car le "->" signifie qu'on travail avec
    // l'adresse de l'objet
    C3 = C2 ; 
    cout <<"Apres Changement : " <<endl ; 
    cout << C3  ; 



    return 0 ; 

}