#include "piledechar.h" // header in local directory
#include <iostream> // header in standard library
using namespace std;

// Methodes de classe 
   
   
    //Ecrire un méthode CompterElements() qui donne retourne un entier positif qui correspond au
    // nombre d’éléments actuellement présents dans la pile

    int piledechar::CompterElements()const {


        return (this->mSommet) ; // il y'a (mSommet) élements dans la pile 
    }

    // Ecrire la méthode AfficherPile() qui affiche entre des ’[’ et ’]’ les éléments actuellement présents dans la pile.

    void piledechar::AfficherPile()const{

        for(int i = 0 ; i < this->mSommet ; i++){

                cout << '[' << this->mpile[i] << ']'<< "  " ;
        }
    }


    // Ecrire une méthode EmpilerElem() qui prend un caractère en paramètre et le place sur le dessus de la pile.
    void piledechar::EmpilerElem(char c ) {

        
        this->mpile[mSommet] = c ; 
        this->mSommet++ ;
    }


    // Ecrire une méthode DesempilerElem() qui retourne le caractère du dessus de la pile
    // On supprime l'element et la pile descend d'un element 
    char piledechar::DesempilerElem(){

        char stock = this->mpile[mSommet-1] ; // Stockage avant modification
        mSommet-- ; // La dernière case contenant une valeure est "supprimée" 
        return stock ; 
    }


    void piledechar::Adressage() {

        for (int i = 0 ; i < this->mSommet ; i++){

            cout <<'[' <<  this->mpile[i] <<']' << " a l'adresse : " << (void*)&(this->mpile[i]) << endl ; 
        } 
    }





    // Ecrire le destructeur, chargé de libérer les ressources allouées par chaque instance de classe.
    piledechar::~piledechar() { delete mpile ; cout << "(Destructeur)" << endl ; }














    
