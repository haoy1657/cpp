// déclaration de la classe PiledeChar
#include <iostream> // header in standard library
using namespace std;
//

/* Char is a C++ data type designed for the storage of letters. 
Char is an abbreviation for an alphanumeric character. It is an integral data type, 
meaning the value is stored as an integer. A char takes a memory size of 1 byte. 
It also stores a single character./*

// Informations 

/* La classe contient trois données membres privées : deux entiers strictement
positifs, nommés mMax et mSommet, et un pointeur sur char mPile. La donnée membre mMax contient
la taille de la pile créée. La donnée membre mSommet indique le numéro de la case vide dans laquelle
on pourra empiler le prochain caractère. Le pointeur sur un caractère mPile désigne le tableau de
caractères, alloué dynamiquement */ 

// La taille max de la pile sera par défaut 100.

class piledechar
{
private:
    
    int mMax ; int mSommet ; 
    char * mpile ;

public:
    piledechar( int mMax = 100 , int mSommet = 0 ){

        this->mMax = mMax ; 
        this->mSommet = mSommet ; 
        this->mpile = new char[this->mMax] ; // Tableau de caractères alloué dynamiquement 
        cout << "(Constructeur par defaut)" << endl ; 
    }



    piledechar( const piledechar & objet ) { // Par réference à un objet de type piledechar
        this->mMax = objet.mMax; // La taille de la pile de notre objet actuel sera celle de l'objet passé en argument (copie)
        this->mSommet = objet.mSommet ;
        this->mpile = new char[this->mMax] ; // Tableau de caractères alloué dynamiquement

        for(int i = 0 ; i < this->mSommet ; i++) {

            this->mpile[i] = objet.mpile[i] ; 
            }
        
        cout << "(Constructeur par copie)" << endl;
        }
     
     
     
     
     int CompterElements() const ; 
     void AfficherPile() const ; 
     void EmpilerElem(char c ) ; 
     char DesempilerElem() ; 


     // Bonus :   Afficher l'adresse de chaque case allouée dynamiquement pour notre chaine de caractère : 
     void Adressage() ; 
    
     


     ~piledechar() ; 


};










