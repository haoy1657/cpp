// TD2 , Exo3
#include<iostream>
using namespace std;


class Tabfloat{
    
    int size ; 
    float * Tab ; 
    int nb_elem ; // Derniere case ou il y'a eut un ajout

    public : 

    // Constructeur 
    Tabfloat ( int size ){

        this->Tab  = new float[size]  ; // Reservation en memoire de size cases // On a deja déclaré le type du pointeur Tab plus haut , pas besoin de le remettre 
        nb_elem = 0  ;
        this->size = size ; 
    }
    
    
    int Taille () ; 
    float somme(); 
    bool Belong(float val); 
    void ajoute(float i );

    ~Tabfloat() ; // A definir à l'exterieur 


} ; 



int Tabfloat::Taille () {
    return this->size ; 
}

float Tabfloat::somme() {

    float sum = 0; 
    
    for(int i = 0 ; i  < this->size ; i++) {

    sum += this->Tab[i] ; 
    }

    return sum ; 
}

bool Tabfloat::Belong(float val){
    
    for(int i = 0 ; i  < this->size ; i++) {

    if (this->Tab[i] == val){return true ; }
    }
    return false ;  

}

void Tabfloat::ajoute(float i ) { // regarder la case ou il n'y a rien 

        this->Tab[this->nb_elem] = i ; 
        cout << "size  :" << this->size << "  , i vaut : " << i <<"; nb vaut : " << this->nb_elem <<endl ;
        this->nb_elem ++ ; // On incremente etant donné qu'au premier tour array[0] sera rempli avec i , on passera a array[1] pour le prochain tour...ect 
}

Tabfloat::~Tabfloat() { delete Tab ; }



int main () {


    Tabfloat array(10) ; // Creation d'un objet 
    int i ; 
    for(i = 0 ; i < array.Taille() ; i++) {

        array.ajoute(i) ; 
    } 

    int k = 3 ; 
    if (array.Belong(k) == true){cout << k <<" appartient au tableau"<<endl;}
    else{cout << k << " n'appartient pas au tableau"<<endl;}

    cout << "Somme  :" << array.somme() << endl ; 
    return 0 ; 
}