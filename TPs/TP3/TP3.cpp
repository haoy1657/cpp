#include <iostream>
#include <string>
#include "Personne.h"

using namespace std ; 



// Creation du Tableau dans le main 
// Créer un tableau de Personne avec différentes initialisations 
void Tableau (){ 

    int size ; 
    cout << "Combien y'a t-il de personne ?  : "; 
    cin >> size ; 
    cin.ignore() ; 
    cout <<endl ;  

    Personne * Tab = new Personne[size] ; // Allocation du tableau

    int buffer_max = 80 ; 


    for ( int i = 0 ; i < size ; i ++ ){
        
        char * buffer_name = new char[buffer_max];
        cout << "Personne numero "<< i << " quel est votre nom ? " ;
        cin.getline(buffer_name,buffer_max-1); // Getline
        cout << endl ; 

        char * buffer_fname = new char[buffer_max];
        cout << "Personne numero "<< i << " quel est votre prenom ? " ;  // fname pour first name 
        cin.getline(buffer_fname,buffer_max-1); // Getline
        cout << endl ; 
         
        int current_age ;
        cout << "Quel age avez vous ? : " ; 
        cin >> current_age ; 
        cout << endl ; 

        Tab[i] = Personne ( buffer_name , buffer_fname, current_age) ; // Appel au constructeur 
        cin.ignore() ; // Nettoyer le cin 
        // note : Tab[i] est notre objet et on l'initialise directement  ==> Objet = Classe ( constructeur )

        // Test des affectations 
        // Tab[0].Affectation(Tab[1]) ; 
        // Tab[0] = Tab[1] ; 

        delete [] buffer_name ; 
        delete [] buffer_fname ; 

    } 
 
    cout << "Le tableau est compose de : " << endl ; 
    
    for( int i = 0 ; i < size ; i ++){

        // Afficher la liste des personnes avec leur age 
        cout << Tab[i].Lire_nom() << " " << Tab[i].Lire_prenom() << " age de " << Tab[i].Lire_age() << " ans " << "( A l'adresse "<< &Tab[i] <<" )"<<endl ; 
        
        } 
        // ( Tab[i])  renvoie directement la valeur de la ieme case du tableau pointée par Tab 


        // Détruire le tableau
        cout<<endl<<endl ; 

        delete [] Tab ; // Suppression du tableau 
}  



// creation d'un étudiant : 
Etudiant One_Student () {

    cin.clear() ; 
    
    int buffer_max = 80 ; 


   Etudiant etu ; 
        
    char * buffer_name = new char[buffer_max];
    cout << "Nom de l'etudiant :  " ;
    cin.getline(buffer_name,buffer_max-1); // Getline
    cout << endl ; 

    char * buffer_fname = new char[buffer_max];
    cout << "Preom de l'etudiant :  " ;  // fname pour first name 
    cin.getline(buffer_fname,buffer_max-1); // Getline
    cout << endl ; 
        
    int current_age ;
    cout << "Age :  " ; 
    cin >> current_age ; 
    cout << endl ; 

    etu = Etudiant ( buffer_name , buffer_fname, current_age) ; // Appel au constructeur 
    cin.ignore() ; // Nettoyer le cin 
    // note : Tab[i] est notre objet et on l'initialise directement  ==> Objet = Classe ( constructeur )

            

    delete [] buffer_name ; 
    delete [] buffer_fname ; 
    


    return etu ; 

}



int main () {


    
    // Dans le constructeur en ne spécifiant rien  , il faut alors allouer l'objet dynamiquement étant donné qu'on utilise 
    // des pointeurs  en attribut
    
    // Personne *Utilisateur = new  Personne(); 
    // cout << "Bonjour " << Utilisateur->Lire_nom() << " " << Utilisateur->Lire_prenom()  << endl ; 
    //  Quand on travaille avec l'adresse de l'objet on utilise  " -> "


    
    
    
 /*  1/   Déclarer une classe Personne représentée par un nom, un prénom et un âge (alloués dynamiquement).
    Ecrire les constructeurs et destructeurs ainsi que les fonctions permettant de les modifier et de
    renvoyer leurs valeurs.
    – On souhaiterait pouvoir créer des instances en spécifiant soit le nom, le prénom et l’âge, soit en ne
    spécifiant rien. */



/*  string name ; string firstname ; int age ; 
    cout << "your name : " ; cin >> name  ; cout <<endl ; 
    
    cout << "first name : " ; cin >> firstname  ; cout <<endl ; 
    cout << "age : " ; cin >> age  ; cout << endl ; 

    // Instance de classe 
    Personne Utilisateur(name,firstname,age) ; 
    cout << "Bonjour " << Utilisateur.Lire_nom() << " " << Utilisateur.Lire_prenom()  << endl << endl; 
    cout << "Test de la fonction modifier : "<<endl ; 
    Utilisateur.Modifier_infos(name , firstname , age + 10) ;  */

     
    
    
    // 2/ Tableau alloué dynamiquement ( à decommenter) 
    
    Tableau() ;
    
    
    // 3/ L'opérateur de surcharge a éte declaré dans la classe Personne en tant que méthode 
    
    
    
    
    // 4 /  Classe fille 
    
/*     Etudiant Takumi("Fujiwara" , "Takumi" , 20) ; 
    
    
    // cout << "Test : "<< Takumi.Lire_nom()  ; 
    cout <<endl ; 
    // La classe fille a accés aux methodes publiques de la classe mere 
    
    // Relevé de notes 
    Takumi.Tableau_Notes() ; 

    // Affichage du relevé de notes
    Takumi.Bulletin() ; 

    cout <<endl ; 
    
    // Calcul de la moyenne 
    Takumi.Moyenne() ; 
    
    cout <<endl ; 
    
    // Affichage d'une note
    cout << Takumi.get_note("Automatique") <<"/20 en automatique lineaire (Methode get_note)" << endl ; 
    
    // Methodes get_note et set_note 
    cout <<endl ; cout << "Modification de la note en mecanique (Methode set_note)" <<endl ; 
    
    double note ; 
    cout << "Entrez une note : " ; 
    cin >> note ;
    Takumi.set_note("Mecanique" , note) ; 
    cout <<endl ; 
    cout << Takumi.get_note("Mecanique") <<"/20 (apres modification) en Mecanique" << endl ;
    cout << " Affichage du nouveau bulletin : " << endl << endl ; 

    // Affichage du relevé de notes apres modification 
    Takumi.Bulletin()  ; cout <<endl <<endl ;   */


    
    
    
    // Tableau d'etudiants initialisé 
    // rentrer des notes et calculer une moyenne par exemple 

    
    int size = 2 ; // Nombre d'etudiants 

    Etudiant *Students ; 
    Students = new Etudiant[size] ; 

    for(int i  = 0 ; i <size ; i++){

        Students[i] =  One_Student() ; 
    
    }

    // Bulletin et Moyenne du premier étudiant du tableau 
    
    Students[0].Tableau_Notes() ;
    Students[0].Bulletin() ; 
    Students[0].Moyenne() ; 

    delete [] Students ; // Suppression du tableau 

 





    return 0 ; 
}


//  g++ TP3.cpp Personne.cpp ;  ./a.exe