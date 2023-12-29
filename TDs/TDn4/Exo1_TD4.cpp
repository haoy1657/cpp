// TDn4 , EX1 

#include <iostream>
#include <string>
using namespace std ; 
#include <stdexcept>


class Vecteur  {

    // Attributs

    int taille ; 
    int* Array ; // Tableau contenant les composantes du vecteur , a essayer avec un tableau statique 


    // Constructeur 
    public : 
        
        Vecteur (int taille = 1 ) {

            this->taille = taille ; 
            Array = new int[this->taille] ; 

        }

        // Methodes 

        void RemplirVecteur () {

            int var ; 
            for (int i = 0 ; i < this-> taille ; i++){

                cout << "Entrez une valeur de composante : " ; 
                cin >> var ; 
                Array[i] = var ; 
                cout << endl ; 
            }

        }

        
        
        // Faire avec les exception pour deux vecteurs qui n'ont pas la meme taille 
        
       // Surcharge de l'operateur addition 
        
        Vecteur operator + ( const Vecteur & Other){

            Vecteur Addition(this->taille) ; 
            if (this->taille < Other.taille){ throw std::invalid_argument ( "Les deux vecteurs n'ont pas la meme taille") ;}
            
            for (int i = 0 ; i < this->taille ; i++ ){
                Addition.Array[i] = this->Array[i] + Other.Array[i] ; 
            }
            
            cout <<"(Surcharge de l'operateur + )" << endl ; 
            return Addition ; 

        }

        
        
         
        int operator * ( const Vecteur & Other){
            
            int sum = 0 ;  
            
            for (int i = 0 ; i < this->taille ; i++ ){
                sum += this->Array[i] * Other.Array[i] ; 
            }
            
            cout <<"(Surcharge de l'operateur * )" << endl ; 

            return sum ; 

        } 


            
            
        void operator = ( const Vecteur  & Other){
                
            
            for (int i = 0 ; i < this->taille ; i++ ){
                this->Array[i] =  Other.Array[i] ; 
            }
            
            cout <<"(Surcharge de l'operateur = )" << endl ; 
        }


        void Affiche_Vecteur() {
            
            cout << "Composantes du vecteur " << endl ; 

            for (int i = 0 ; i < this-> taille ; i++){
                cout << this->Array[i] << " " ; 
            }
        }
    

        ~Vecteur() { delete [] Array ; cout << "Destructeur" << endl ; }



} ; 


int main () {


/*     Vecteur Vec(3) ; 
    Vec.RemplirVecteur()  ;
    cout <<endl ; 
    Vecteur Vec2(3) ; 
    Vec2.RemplirVecteur() ; 



    Vecteur Vec3(3) ;  
    Vec3 = Vec + Vec2 ; 
    Vec3.Affiche_Vecteur() ; cout <<endl ; 

    cout << "Dot product" << endl ; 
    Vecteur Vec4(3) ;  
    int dot  = Vec*Vec2 ; 
    cout << " Dot product = " << dot  ;

      
    // Destruction 
    Vec.~Vecteur() ; 
    Vec2.~Vecteur() ; 
     */
    
    

    // Test erreur 
    cout <<endl ; 
    cout << " Test erreur sur le '+' "  << endl ; 

    Vecteur Veco(3) ; 
    Veco.RemplirVecteur()  ;
    cout <<endl ; 
    Vecteur Vect(4) ; 
    Vect.RemplirVecteur() ; 

    Vecteur Vec_test(3) ;  
    Vec_test = Veco + Vect ; 
    Vec_test.Affiche_Vecteur() ; cout <<endl ; 

    


    
    







    return 0 ; 
}