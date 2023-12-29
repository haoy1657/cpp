// Constructeur de conversion , convertir un objet de la classe Article en un objet de la classe Boisson
// Utilisation : Dans le cas des dérivations private et protected


#include <iostream>
using namespace std;

class Boisson ; // obligatoire pour déclarer l'existance de la classe Boisson utilisée dans Article:

class Article {

// Attribut
double prix; 
// Constructeur 

public : 

    Article (double prix = 0 ) { 

        this->prix = prix ;
    }

    // constructeur de conversion Boisson -> Article:
    Article( const Boisson &); // Méthode à redefinir en dehors de la classe (Constructeur de conversion)
    
    // Getter 
    double quelprix() const {return prix ; }

};  



class Boisson : private Article { 

    double Volume ; 

// Constructeur 
 public:  

    Boisson(double price = 0 , double volume= 0) : Article(price) , Volume(volume) {} // Appel du constructuer en incluant celui de la classe mère
        
        
    // Getter 
    double quelVolume() { return Volume ; }
    // Méthode quelprix() 
    double quelprix() const {return Article::quelprix() ; }


} ;


Article::Article(const Boisson &b) { // Reference à un objet de la classe boisson 

 this->prix = b.quelprix() ;  // L'attribut prix de la classe Article se verra attribuer l'attribut prix de notre objet b 

}



int main () {

    Article a ; // Initialisation par défaut
    Boisson b(0.99,50.0) ; 
    cout << "Boisson de marque Coca, prix : " << b.quelprix() << "$ , d'un volume de " << b.quelVolume()<<"cl"<< endl ;
    cout << "place a la conversion : "<<endl ; 
    a = Article( b ); // conversion explicite obligatoire (appel au constructeur de conversion)
    cout << "prix de a = " << a.quelprix() <<"$"<<endl;

    return 0 ; 
}