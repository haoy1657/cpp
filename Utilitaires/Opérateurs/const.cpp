#include <iostream>
#include <string>
#include <vector>
using namespace std ; 

int main() {


    const int MAX_AGE = 90 ; // n'est plus une 'variable' mais une constante

    // Pointeur 

    int *a = new int ; 
 
    // a = &MAX_AGE // ne marchera pas à cause du "const". 
     a = (int*)&MAX_AGE ; // On peut cepandant pointer à l'adresse de la variable MAX_AGE
    cout << *a << endl ; 
    
    
    // Pointeur constant 

    const int * b = new int ;
    // *b= 2 ; // MODIFICATION IMPLICITE DU CONTENU -- ne marchera pas à cause du "const" devant la déclaration du pointeur
    b = (int*)&MAX_AGE ; // La seule chose que l'on ne pourra pas changer est le //*CONTENU du pointeur
    cout << *b << endl ; 

    // Note : int const *a = const int *a 

    /* Ne marche qu'avec des classes : 
         le const à la fin de la méthode-- type function() const 
         veut dire que la méthode ne vas pas modifier d'attributs -- READ ONLY

         écrire const avec une méthode de setters n'aurait pas de sens 

         exemple : 
            const int* const GetX() const 
            on retourne un pointeur qui ne peut pas etre modifié (const int*)
            de plus le contenu du pointeur ne peut lui non plus etre modifié
            enfin la méthode ne modifiera pas d'attributs. 

        Pour pouvoir changer une variable dans une méthode avec "const" : 

        mutable int var ; 
    
    */



    return 0 ; 
}