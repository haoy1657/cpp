#include <iostream>
using namespace std ; 


class Mesure {
private: // Attributs 
    float Longueur ; float Largeur ; float Hauteur ; 

public : // Getters 
    float getlong() const { return Longueur ; }
    float getlarg() const { return Largeur ; }
    float gethigh() const {return Hauteur ; }

    // Setters 

    void setlong(float Long1) { Longueur = Long1 ; }
    void setlarg(float Larg1) { Largeur = Larg1 ; }
    void sethigh(float Haut1 ) { Hauteur = Haut1 ; }

    double Volume() {
        return Hauteur*Longueur*Largeur ; 

    }       

    // Constructeur 

    Mesure (float la , float lo , float h ){
        Longueur = lo ; 
        Largeur = la ; 
        Hauteur = h ; 
    }
};


int main(void) { 
    Mesure m1(10 , 25 , 63) ; 
    Mesure m2(2.3 , 1.2 , 10.4) ; 

    cout << "Hauteur "<<m1.gethigh() << "cm ; Longeur "<< m1.getlong() <<"cm ; Largeur " << m1.getlarg() << " cm" << endl ; 
    cout << "Le volume est de : " << m1.Volume() << " cm3" << endl ; 
    return 0 ;  
}