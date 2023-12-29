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


/* // Classe fille :  
class Boisson : Article { 

double Volume ; 

// Constructeur 
public:  

    Boisson (double Volume= 0 ) { 

        this->Volume = Volume  ; 
    }

    // Getter 
    double quelVolume() { return Volume ; }


} ;
 */


// Classe fille redéfinie pour y rajouter une méthode quelprix() 

class Boisson : Article { 

    double Volume ; 

// Constructeur 
public:  
    Boisson (double Volume =0 ) { 

        this->Volume = Volume  ; 
    }

    // Getter 
    double quelVolume() { return Volume ; }
    // Méthode quelprix() 
    double quelprix(){return Article::quelprix() ; } // Vu qu'on return une valeure , l'operateur de portée se note : Class::Function_name

    // NOTE : le constructeur par défaut de Article qui est appelé


} ;



int main () {

    Article a(0.99) ; 
    Boisson b(50.0) ; 

    cout << "Boisson de marque Coca, prix : " << a.quelprix() << "$ , d'un volume de " << b.quelVolume()<<"cl"<< endl ; 
    cout << "Methode 2 :" <<endl ; 
    cout << "Boisson de marque Coca, prix : " << b.quelprix() << "$ , d'un volume de " << b.quelVolume()<<"cl"<< endl ; 
    return 0 ; 
}