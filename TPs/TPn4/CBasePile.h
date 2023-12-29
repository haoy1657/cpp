 #include <iostream>
 #include <string>
 using namespace std ; 


// Classe mère 
class CBasePile{

    protected : 
        int * Pile ; // Une pile déclarée dans la classe mère qui sera commune aux deux classes dérivées et 
        //que l'on utilisera differement selon la classe LIFO , FIFO  
        int Mmax ; // Taille max de la pile 
        int Msommet ; // Index de la prochaine case à remplir 

    public : 

        CBasePile() {

            Mmax = 5 ; 
            Pile =  new int [Mmax] ; 
            Msommet = 0 ; 
            // cout << "(Constructeur de la classe mère)"<<endl ; 

            // Note : pas vraiment de "constructeur" ici , on crée directement la pile avec une taille max et une position
            // de sommet initialisée à 0 
        }
        
        
        CBasePile & operator < ( int ) ; // Methode d'empilement : Commune aux deux piles  
       int Size() ; // Taille de la pile courante : : Commune aux deux piles 

       // Certaines surcharges d'operateurs sont des methodes virtuelles / Abstraites 
        
        virtual int Get_Pile(int i) ; // Getter , renvoie la valeure de notre pointeur, pointant à la ieme case de la pile 
        virtual void operator > ( int &) {} ;  // Desempilement 

        
} ; 


// Classes dérivées 




class CPileFifo : public  CBasePile {
    
    
    public : 

        CPileFifo ( ) : CBasePile() {} // On crée directement la pile (notre objet est une pile)
        
        
        void operator > ( int &) ; 


        
} ; 






class CPileLifo : public  CBasePile {

    public : 

        CPileLifo ( ) : CBasePile() {}
        
        
        void operator > ( int &) ; 


        
} ; 


