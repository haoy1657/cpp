

#include <iostream>
using namespace std;
#include <math.h>       /* sqrt */


// Exercice5 TP n° 1 

/* Réalisez une classe Equation2 permettant, comme son nom l’indique, de représenter et de traiter
informatiquement des équations du second degré. La classe devra permettre de saisir et d’afficher les
paramètres d’une équation du second degré ainsi que de calculer les solutions de l’équation. */


class Equation2 {
    
    // Attributs 
    public : 
        double a ; 
        double b ; 
        double c ; 

    // Constructeur 

    public : 
    
        Equation2 (double a  , double b  , double c ) {
            this->a =a ; 
            this->b= b ; 
            this->c =c ; 
        }

        double get_delta(){
            cout << "Le discriminent vaut : "<< b*b - 4*a*c << endl ; 
            // cout << "a = " << a << " , b = :" << b << " , c : " << c << endl ; 
            return (b*b - 4*a*c) ; 
            } ; 
    
    
    void Solutions() {
        
        double delta = get_delta() ; 
        
        if (delta < 0) { cout << "Deux Racines Complexes : " << -b/(2*a) << " +/- j"  << sqrt(-delta)/(2*a) <<endl ; }
        if (delta == 0) { cout << "Une Racine Reelle : " << (-b/(2*a)) << endl ; }
        if(delta > 0) { cout << "Deux Racines Reelles : " << -b/(2*a) << " +/- "  << sqrt(delta)/(2*a) <<endl ; }
    }

} ; 


int main() {


    double x0 ; 
    double x1 ; 
    double x2 ; 
    
    cout << "Coefficient de degres 2 : "; // Invite de commande 
    cin >> x2 ; 
    
    cout << "Coefficient de degres 1 : "; 
    cin >> x1 ; 
    
    cout << "Coefficient de degres 0 : "; 
    cin >> x0 ; 
    
    
    Equation2 Eq1( x2, x1 , x0) ; 
    Eq1.Solutions() ; 






    return 0 ; 
}