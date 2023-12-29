// Exercie 6 Tpn1 


#include <iostream>
using namespace std;


/* Ecrire une classe Polynome, qui contient les paramètres d’un polynôme d’un degré n. Il serait intéressant
de pouvoir réaliser deux autres opérations : intégrer et dériver. Ces opérations créeront à partir d’un
polynôme existant, un nouveau polynôme résultat. A vous de proposer une déclaration de classe. */

class Polynome {

public : 
     double Coeffs[5] ; 

    // Constructeur 
    Polynome (double Coeffs[] , int *ptr) {

        for(int i = 0 ; i < *ptr ; i++)
        {
            this->Coeffs[i] = Coeffs[i] ; 
        }

        }

 // Affichage du polynome 
 void Display(int * ptr ) {

      for(int i = 0 ; i < *ptr - 1  ; i++) 
      {

          if (i == 1) {cout << Coeffs[i] <<"x" << " + " ; }
          else if(i == 0){cout << 1 << " + " ; }
          else {cout << Coeffs[i] <<"x" <<"^"<<i << " + " ; }
      }
         
         cout << Coeffs[*ptr - 1] <<"x" << "^" << *ptr-1; 
    
    }


 // Dérivation du polynome 
 void Derivative(int * ptr) {

        for(int i = 0 ; i < *ptr - 1  ; i++) 
      {

          if (i == 1) {cout << Coeffs[i] << " + " ; }
          else if(i == 0){cout << 0 << " + " ; }
          else {cout << i * Coeffs[i] <<"x" <<"^"<<i-1<< " + " ; }
      }
         
         cout << (*ptr -1)* Coeffs[*ptr - 1] <<"x" << "^" << *ptr-2; 
    
    }

 // Integration du polynome 
 void Integral(int * ptr) {

        for(int i = 0 ; i < *ptr - 1  ; i++) 
      {

    
          if(i == 0){cout << Coeffs[i] <<"*x"<<" + " ; }
          else {cout  <<"(" <<Coeffs[i]<<"/"<<(i+1) << ")" <<"x" <<"^"<<i+1<< " + " ; }
      }
         
         cout << "(" << Coeffs[*ptr - 1]<<"/"<<(*ptr) <<")" <<"x" << "^" << *ptr; 
    
    }


} ; 


int main () {

    int size = 5 ; 
    int * ptr = &size  ; 
    double Tab[*ptr] = {1,0,4,7,3} ; 
    Polynome Tableau(Tab,ptr) ; 
    cout << "Notre Polynome de base : " ;
    Tableau.Display(ptr) ; 
    cout << endl ; 
    cout << "Notre Polynome Derive : " ;
    Tableau.Derivative(ptr);
    cout << endl ; 
    cout << "Notre Tableau integre : " ; 
    Tableau.Integral(ptr) ; 



    return 0 ; 
}


// Attribut  == un pointeur . On utilise l'allocation dynamique 