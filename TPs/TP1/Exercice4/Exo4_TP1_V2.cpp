
/* Lire l’énoncé jusqu’à la fin avant de commencer.
Créer une classe Tableau. Le programme devra demander à l’utilisateur combien de valeurs sont à
traiter, il mémorise ensuite chaque valeur (ce seront des réels simple précision : float). La classe
comprend mis à part les constructeurs une méthode moyenne() pour calculer la moyenne de ces valeurs
et l’afficher */

#include <iostream>
using namespace std;

class Tableau {

    // Attributs
    private : 
        float * Tab ;  // Pointeur pour representer les elements 
        int size ; 
        
    // Constructeur 
    public : 
        Tableau ( int size){ // Inutile d'initialiser le tableau dans le constructeur , on le fera via le setter 
 
            this->size = size ; 
            Tab = new float[size] ; // Reservation de cases mémoire. New == Allocation , float[size] == un Tableau de size cases 
        }
    
        
    // Setter
        void set_elements ( int i , float Value_in) {

           Tab[i] = Value_in ; 
        }

    // Methode d'affichage 
    void Display(){

        for( int i = 0 ; i < this->size ; i++){
            cout << this->Tab[i] << " "  ; 
        }
    }

    // Methode de la moyenne ( A redefinir en dehors de la classe de préference)

    float Moyenne() ; 

    // Methode de suppression 

    bool EnleveElement() ; 

} ;


float Tableau::Moyenne(){

    float sum = 0 ; 
    for(int i=0; i < this->size ; i++){

        sum += this->Tab[i] ; 
    }

    // cout << "Somme = " << sum << " ; " << " Dimension : " << this->size <<endl ; 
    return  ( sum / size ) ; 
} 


bool Tableau::EnleveElement() {


    float value ; 
    cout <<"Value to delete : " ; 
    cin >> value;  

    for ( int i = 0 ; i < this->size ; i++){

        if ( this->Tab[i] == value){

            for ( int k = i  ; k < this->size - 1  ; k++){
                Tab[k] = Tab[k+1] ; 
            }

            Tab[this->size] = 0 ; 
            return true ; }

    }

    return false ; // La valeur tapée par l'utilisateur ne correspond à aucune valeure presente dans le tableau 

}






int main() {

    int size ; 
    cout << "Enter Size  : " ; 
    cin >> size  ;
    
    Tableau Array( size ) ; // Le constructeur ne prend en entrée qu'un argument 
    
    
    float value ; 
    // Remplissage tableau 
    for ( int i = 0 ; i < size ; i++){

        cout << "Enter Value : " ; 
        cin >> value ; 
        cout << endl ; 
        // Appel du setter a chaque tour de boucle 
        Array.set_elements ( i , value) ; 
    }

    cout << "Notre Tableau : " ; 
    Array.Display() ; 
    float mean = Array.Moyenne() ; 
    cout << endl ; cout << "La moyenne valant : " << mean << endl ; 


    // Suppression element 
    cout <<" " ; cout <<endl ; 
    bool Boolean =Array.EnleveElement() ; 
    cout << "Notre Tableau : " <<endl ; 
    Array.Display() ; 
    if (Boolean == true ) {

        cout <<" la nouvelle moyenne une fois la valeur supprimée  : " << Array.Moyenne() << endl ; 
    }
    
    else {cout << "Pas de modifications, la moyenne valant : " << mean << endl ; }




    return 0 ; 




}



// Suppression d'un element : 

// Exemple : 1 2 3 4
// On supprime le 2
// On considère qu’ici "supprimer" consiste à décaler les éléments suivants du tableau d’un cran. Ainsi, la valeur disparaît du tableau.

// 1 3 4 [] 
// avec [] la case qui était occupée par 4 qui devient vide 

