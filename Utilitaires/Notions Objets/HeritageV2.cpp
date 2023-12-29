// Exemple des classes Artcile et Boisson en utilisant le constructuer de la classe mère dans la classe fille pour donner un prix 

// Notions d'heritage 

#include <iostream>
using namespace std;


class Article {

// Attribut
double prix; 
// Constructeur 

public : 

    Article (double prix = 0 ) { 

        this->prix = prix ;
    }

    // Getter 
    double quelprix() const {return prix ; }

};  



class Boisson : Article { 

    double Volume ; 

// Constructeur 
public:  

    Boisson(double price = 0 , double volume= 0) : Article(price) , Volume(volume) {} // Appel du constructuer en incluant celui de la classe mère
        
        
    // Getter 
    double quelVolume() { return Volume ; }
    // Méthode quelprix() 
    double quelprix(){return Article::quelprix() ; }


} ;



int main () {


    Boisson b(0.99,50.0) ; 
    cout << "Boisson de marque Coca, prix : " << b.quelprix() << "$ , d'un volume de " << b.quelVolume()<<"cl"<< endl ; 
    return 0 ; 
}