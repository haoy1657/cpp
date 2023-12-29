 #include <iostream>
 using namespace std ; 
// Import 
 #include "CBasePile.h"



// LIFO == Les marchandises acquises le plus recemment sont vendues en premier

// FIFO == les marchandises acquises en premier sont vendues en premier 

     ostream & operator << ( ostream & o , CBasePile & P ) {

        o << "test : :" ; 
        for (int i =0 ; i < P.Size() ; i ++ ){
        
            o << P.Get_Pile(i) << " "  ; 
        }
       

        return o ; 

     }



int main() {

   
    CBasePile* ptPile  ; // Pointeur de type CBasepile (ce n'est pas un objet) . Il va pointer sur les piles fifo et lifo 
    CPileFifo fifo; // pile First In First Out 
    CPileLifo lifo ; // pile Last In First Out 
 
    
    // FIFO
    
    ptPile = &fifo; // ptPile pointe vers la pile FIFO
    // Note : l'operation ptPile = &fifo est possible car ptPile et fifo sont de meme type (Heritage)


    // Pour cette instruction nous avons besoin que la classe dérivée soit publique pour avoir acces aux attributs / objets


    *ptPile < 0 < 1   ; // on empile 0 puis 1 -- Surcharge de l'operateur "<"
    cout << "(FIFO) On empile : " << endl ; 
    cout << "pile=" << *ptPile << endl <<endl ;   ; // à l’écran : pile=0 1

    int i ; 
    *ptPile > i ; // On desempile (Un seul à la fois d'ou le fait que la surcharge ne retourne rien)

    cout << "Apres avoir desempile : " << endl ; 
    cout << "pile =" << *ptPile  << ", i = " << i <<endl << endl  ; 


    


    // LIFO
    ptPile = &lifo ; // ptPile pointe vers la pile LIFO
    *ptPile < 0 < 1 ; // on empile 0 puis 1
    cout << "(LIFO) On empile : " << endl ; 
    cout << "pile=" << *ptPile << endl <<endl  ; // à l’écran : pile=0 1
    
    *ptPile > i ; // dépile dans i
    cout << "Apres avoir desempile : " << endl ; 
    cout << "pile=" << *ptPile << " i=" << i ; // à l’écran : pile=0 i=1
    // Dans ce cas , 1 sera dépilé (vendu) en premier car acquis en dernier , c'est la methode LIFO  */



    return 0 ; 

}




 // g++ TP4.cpp CBasePile.cpp ;  ./a.exe


    

    