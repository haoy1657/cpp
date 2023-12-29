// Header , contient la déclaration de la classe 

#include <iostream>
using namespace std ; 
#include <string>

class Personne {

    
    protected : // Pour que la classe fille puisse y avoir accès 
    // L'utilistauers manipulera des chaines de caractères et un entier. 
    //le code lui , va manipuler 3 pointeurs pour faire de l'allocation dynamique 
        string * nom ; 
        string *prenom ; 
        int  * age  ;


    
    public: 
    
    // Constructeur par defaut
    
    Personne (string nom = "None name" , string prenom = "None first name" , int age = 0){

        this->nom  = new string (nom) ;
        // On va allouer une case en mémoire contenant le nom passé en argument au constrcuteur 
        // Notre attribut est désigné par this 

        this ->prenom  = new string(prenom) ;
        this-> age = new int (age) ; 
        cout << "(Constructeur par defaut)" << endl ; 

    }




    // Ecrire les fonctions permettant de renvoyer leurs valeurs
     string Lire_nom () const ; 
     string Lire_prenom() const ; 
     int Lire_age () const ; 

     // Modification
     void Modifier_infos(string nom  , string prenom , int age ) ; 

     // Définir une méthode dont le rôle est d’affecter une instance de Personne à une autre
     void Affectation(const Personne & ) ; 

     // Affectation surchargée 
     void operator= ( const Personne & ) ; 

     // Destructeur 
     ~Personne() ; 


} ; 





class Etudiant :  Personne {


    // Attributs 
    // aura les memes attributs qu'une personne 

    int * Notes ; // On considere 5 matieres  

    // Constructeur 
    public: 
    Etudiant(string nom = "None" , string prenom = "None" , int age = 0 ) : Personne(nom , prenom , age) {

       //*(this->nom) = nom ; *(this->prenom) = prenom ; *(this->age) = age ;  Inutile 
        
        Notes = new int[5] ; // Allocation de 5 cases en mémoire pour chaque Etudiant crée 
        cout <<"(Constructeur de classe fille)"<<endl ; 
    }

     
     
     string Lire_nom() const ; 
     string Lire_prenom() const ; 
     int Lire_age () const ;  
     
     void Tableau_Notes() ; 
     void Bulletin() const; // Recapitulatif des notes 
     void Moyenne() const; 
     double get_note(string Matiere) const ;  // Liste des Ue : "Robotique" , "Automatique" , "Mecanique" , "C++" , "Machine Learning"
     void set_note(string Matiere , double note ) const; 


     void operator= ( const Etudiant & ) ; // Surcharge de l'operateur = 
     
     // Destructeur 
     ~Etudiant()  ;


     

} ;