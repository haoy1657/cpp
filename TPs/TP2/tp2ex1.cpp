#include "piledechar.h" // header in local directory
#include <iostream> // header in standard library
using namespace std;

void AfficheInverse(const piledechar & pile) {  // Passage d'argument par reference pour eviter de modifier la pile principale 

    // on crée un nouvel objet qui va copier les attributs d'un pile passée en argument, qui elle ne sera pas modifiée

    piledechar copy = pile ; // Appel du constructeur par copie 

    // Affichage : 

    // copy.AfficherPile() ; 

    // Pour faire l'affichage à l'envers , on utilisera la methode de desempilement pour afficher successivement les elements tant 
    // qu'il y en aura 

    while(copy.CompterElements() > 0) {

        char element = copy.DesempilerElem() ; // L'élement au sommet de la pile à l'instant t 
        cout << '[' << element << ']' << " " ; 
    }
    cout <<endl; 
}


void inversemajuscule (piledechar & pile) {
    cout <<endl ; 
    piledechar copy = pile ; // Constructeur par copie 
        
    while(copy.CompterElements() > 0) {

    char element = copy.DesempilerElem() ; 
    element = toupper(element) ; 
    cout << '[' << element << ']' << " " ; 
    }
    cout <<endl ; 

}




int main() {

    piledechar Char_Array(17 , 0 ) ; // Creation de l'objet et du tableau alloué dynamiquement 
    
    // On definit la taille max pour la saisie du texte 
     int buffer_max =  80 ; 
    
    // Saisie de texte 
    char buffer [buffer_max];
    cin.getline(buffer,buffer_max-1); // Getline 
    cout<<"chaine : "<< buffer<< endl;  

     // découpe la chaîne de caractère lettre par lettre + placement dans la pile  
    for(int i = 0 ; i < buffer_max ; i++){

        if(buffer[i] == '\0'){break ; }
        // '\0' correspond au caractère de fin de chaine !
        // Les éspaces comptent dans cet exercice 
        
        Char_Array.EmpilerElem(buffer[i]); 
    }  
    
    cout << "Elements dans notre chaine de caractere : " << Char_Array.CompterElements() << endl ; 
    Char_Array.AfficherPile() ; 

    cout <<endl ; 
    cout << "Pile a l'enevers : "<<endl ; 

    AfficheInverse(Char_Array) ; 
    cout <<endl ; 
    cout << "Pile originale non modifiee"<<endl ; 
    Char_Array.AfficherPile() ; 
    // La methode afficherInverse n'aura pas modifier notre objet de base 
    cout << endl << endl ; 

    // Methode des Majuscules 
    cout << "Methode des Majuscules"<<endl ;  
    inversemajuscule(Char_Array) ; 
    cout <<endl ; 
    cout << endl << endl  ; 

    // Afficher l'adresse de chaque case alLouée dynamiquement pour notre chaine de caractère : 

    Char_Array.Adressage() ; 





    return 0 ; 
}


/* cin.get() is used for accessing character array. It includes white space characters. 
Generally, cin with an extraction operator (>>) terminates when whitespace is found. 
However, cin.get() reads a string with the whitespace. */

// cin.get(string_name, size);
/* 
    char buffer [4];
    cin.getline(buffer,3);
    cout<<"chaine : "<<buffer<<endl; */



// compiler le main avec g++ tp2ex1.cpp piledechar.cpp ;  ./a.exe

