 #include <iostream>
 using namespace std ; 
 // Import 
 #include "CBasePile.h"


    // Classe mère 
    
    CBasePile &CBasePile::operator < (int  i ){
                
         bool State = false ; // etat de la pile , false == non remplie        
        
        if(Msommet >= Mmax  ) { cout << "Pile entierement remplie.. " <<endl ; State = true ; return *this ; }

        if(State != true){
            
            this->Pile[Msommet] = i ; 
            Msommet ++ ;  // Position de la derniere case vide que l'on peut remplir 
            return *this ; // Retourne le pointeur sur la case courante 
            
            }

            return *this ;

    }

    // L'empilage doit retourner un pointeur 

    // si l'on retourne un void  : *ptr < 0 va marcher mais le resultat de cette operation 
    //qui est un void associé à une autre operation,  < 1 par exemple ,  va planter 
 



     int CBasePile::Size() { 
        
        int sum = 0 ; 
        for( int i = 0 ; i < (this->Msommet) ; i++){

            sum += 1 ; 
            
        }
        return sum ; 
    }

     
     
     int CBasePile::Get_Pile(int i) {

         return this->Pile[i] ; 

    }
    


    
    
    
    // Classe dérivée FIFO

    
     // Methode pour desempiler 
    void CPileFifo::operator > (int & i ){
        
        int stock ; stock = this->Pile[0] ; // Stockage dans une variable intermediaire de la valeur du pointeur 
        // On desempile le premier element de la pile , et on decale le reste 
        this->Pile[0] =  this->Pile[1] ; 
        Msommet -- ;  
        i = stock ; 

        // Nota : ici , la fonction retourne un void si l'on suppose que l'on doit respecter l'ecriture du main() de l'ennoncé
        // D'ou l'utilisation de Pile[0] et Pile[1] dans la fonction car nous voulons uniquement desempiler un element
    } 


    
    
    
    
    // Classe dérivée LIFO

    // On desempile 

    void CPileLifo::operator > (int & i ){
        
        i = this->Pile[Msommet-1] ; // Dernier element de la pile 
        Msommet -- ;  // Position de la derniere case vide que l'on peut remplir 
    } 

    
    
    
  


