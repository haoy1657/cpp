#include <iostream>
using namespace std;

// Allocation Dynamique 

// Exemple : L'utilisateur rentre un entier n et on affiche le nombre d'entier de 0 a n-1 
// ex : si on rentre 4 , le programme affichera 0 1 2 3 

// Etabt donné qu'on ne connait pas à l'avance la taille du tableau , on devra allouer dynamiquement la mémoire *
// Allocation ==> Utile et rapide pour des petites allocations en mémeoire 

// L'allocation mémoire en C++ s'effectue à l'aide des opérateurs new et delete (supprimer la mémoire allouée)



void display ( int*array , int size){ // Un ensemble de  pointeurs , pour le tableau et un int pour la taille
    
    for (int i ; i < size ; i++){
         cout << array[i] <<  " " ; 

    }
}




int main() {

    
    int size ; 
    cout << " Select size : " ; 
    cin >> size  ;
    int * array = new int[size] ; // Allocation d'un tableau de 10 entiers en mémoire . On pointe sur 10 cases en memoire 
    cout << "Allocation dynamique"<<endl ; 
    // Remplissage 

    for (int i ; i < size ; i++){

        array[i] = i ; 
    }

    display(array , size ) ; 
    
    delete[] array ; // Suppression d'un tableau 
    cout <<endl ; 
    cout << "Suppression memoire" ; 

    return 0 ; 
}