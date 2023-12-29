#include "Personne.h" 

#include <iostream>
using namespace std ; 
#include <string>


    
string Personne::Lire_nom () const {

    return *(this->nom); // On travaille avec des pointeurs, on renvoie donc le contenu à leur adresse 
}

string Personne::Lire_prenom () const {

    return *(this->prenom); 
}

int Personne::Lire_age () const {

    return *(this->age); 
} 

void Personne::Modifier_infos(string nom  , string prenom , int age ) {

    *(this->nom) = nom ; 
    *(this->prenom) = prenom ; 
    *(this->age) = age ; 
     cout << "Apres modifications :" << *(this->nom) << " " << *(this->prenom) << " age de " << *(this->age) << " ans " <<endl ; 

}



// Affectation 

void Personne::Affectation (const Personne & Other) {

    *(this->nom) = Other.Lire_nom() ; // Notre Objet actuel  se voit affecter le nom de l'autre l'objet mis en argument 
    *(this->prenom) = Other.Lire_prenom() ;
    *(this->age) = Other.Lire_age(); 

}

// Avec la surcharge 
void Personne::operator= ( const Personne & Other){

    *(this->nom) = Other.Lire_nom() ; // Notre Objet actuel  se voit affecter le nom de l'autre l'objet mis en argument 
    *(this->prenom) = Other.Lire_prenom() ;
    *(this->age) = Other.Lire_age(); 

}



Personne::~Personne(){ delete this->prenom ; delete this->nom , delete this->age ;cout <<  "(Destructeur de la classe Mere)" <<endl  ; }







// Methodes de la classe fille : 

void Etudiant::Tableau_Notes() {

    cout << "Releve de L'etudiant " << *(this->nom) << " " << *(this->prenom) << endl  ; 
    
    string Matieres[5] = {"Robotique" , "Automatique" , "Mecanique" , "C++" , "Machine Learning"} ; 
   
    double current_grade ; // Variable intermédiaire

    for ( int i = 0 ; i < 5 ; i ++ ) {
        cin.clear() ; 
        cout << "Note /20 en "<< Matieres[i] << "(" << &(Notes[i]) << ")" << " : " ; 
        cin >> current_grade  ; 
        //cout <<endl ; cout << current_grade ; 
        Notes[i] = current_grade ;
    } 
    cout <<endl<<endl ; 
    
}

void Etudiant::Bulletin() const {
     
    string Matieres[5] = {"Robotique" , "Automatique" , "Mecanique" , "C++" , "Machine Learning"} ; 
    
    cout << "Le bulletin  de notes est : " << endl ;
    for( int i = 0 ; i < 5  ; i ++){

        // Afficher la liste des notes
        cout << this->Notes[i] << "/20 " <<  "en " << Matieres[i] << endl ; 

    }
    cout << endl<<endl  ; 

}
    
     
// Moyenne

void Etudiant::Moyenne() const {
    double sum = 0 ;
    for( int i = 0 ; i < 5  ; i ++){

        // Afficher la liste des notes
        sum += this->Notes[i] ; 
    }

    cout << "L'etudiant " << *(this->nom) << " " << *(this->prenom) << " a une moyenne de " << (sum)/(5.0) << "/20 " << endl << endl ; 
}

// Avoir accés et Modifier une note 
double Etudiant::get_note(string Matiere) const{

    // "Robotique" , "Automatique" , "Mecanique" , "C++" , "Machine Learning"

    if ( Matiere == "Robotique"){return Notes[0] ; }
    if ( Matiere == "Automatique"){return Notes[1] ; }
    if ( Matiere == "Mecanique"){return Notes[2] ; }
    if ( Matiere == "C++"){return Notes[3] ; }
    if ( Matiere == "Machine Learning"){return Notes[4] ; }
    return 0 ;

}

void Etudiant::set_note(string Matiere , double note) const{

    // "Robotique" , "Automatique" , "Mecanique" , "C++" , "Machine Learning"

    if ( Matiere == "Robotique"){this->Notes[0] = note ; }
    else if ( Matiere == "Automatique"){this->Notes[1] = note ; }
    else if ( Matiere == "Mecanique"){this->Notes[2] = note ;}
    else if ( Matiere == "C++"){this->Notes[3] = note ; }
    else if ( Matiere == "Machine Learning"){this->Notes[4] = note ; }
    else{cout << "Mauvais orthographe" ;  }

}




// Rendre accessibles les méthodes de la classe mère dans la classe fille 


string Etudiant::Lire_nom()const {

    return Personne::Lire_nom();
}

string Etudiant::Lire_prenom()const {

    return Personne::Lire_prenom();
}

int Etudiant::Lire_age()const {

    return Personne::Lire_age();
}



// Surcharge de l'operateur = 
void Etudiant::operator=( const Etudiant & Other){


    *(this->nom) = Other.Lire_nom() ; // Notre Objet actuel  se voit affecter le nom de l'autre l'objet mis en argument 
    *(this->prenom) = Other.Lire_prenom() ;
    *(this->age) = Other.Lire_age(); 

}


// Destructeur 
Etudiant::~Etudiant(){ delete [] Notes ; cout << "(Destructeur de la classe fille)" <<endl  ; } 