// EXO2 , TDn3 

#include <iostream>
#include <string> 
using namespace std ; 


/* Note : En programmation dans les langages C ou C++, const est un mot-clé permettant au programmeur de signaler
 au compilateur que l'élément ainsi qualifié ne doit pas être modifié pendant l'exécution du programme1. 
 Cet élément sera donc constant tout le long d'une exécution normale du programme.
 */

class Chat{

    int * mAge ; 
    int * mPoids; 

    // L'utilisateur manipule des entiers , le code lui manipule des pointeurs alloués dynamiquement 
    public : 
        Chat(int Age = 0 , int Poids = 0) {

            mAge = new int(Age)  ; 
            mPoids = new int(Poids)  ; 
             cout << "(Constructeur par defaut)" <<endl ;

            
        }

    
    
        int LireAge()const {
            return *mAge ; 
        }

        int LirePoids()const {
            return *mPoids;  
        }

        void DefAge(int age ) {
            *mAge = age ; 
        }

        void DefPoids(int Poids ) {
            *mPoids = Poids ; 
        }

        // Affiche l'adresse actuelle des attribus alloués 
        void Adresse() {
            cout << "L'age a l'adresse : " << & mAge << endl ; 
            cout << "Le poids a l'adresse : " << & mPoids << endl ; 

        }
        
        // Constructeur par copie , le const indique que la reference voit ses objets non modifiés 
        

        
        // Retourne le plus gros des deux 
        Chat Bigger( const Chat & Other) {

            if(  *(this->mPoids) < *(Other.mPoids) )  {

                // cout <<"Done - Other " <<  *(Other.mAge) ; 
                return Other ; 
                
            }
            cout <<"Done - This" ; 
            return *this ; // Notre objet actuel est le plus gros des deux 

        }



        void operator=( const Chat & Other){

            *(this->mAge) = *(Other.mAge) ; // Notre Objet actuel  se voit affecter le nom de l'autre l'objet mis en argument 
            *(this->mPoids) = *(Other.mPoids) ;
            cout <<"(Surcharge de l'operateur = )" << endl ; 

        }



} ; 


int main () {

    Chat * Chaton = new Chat(2 , 500) ; 
    Chaton->Adresse() ; 

    Chat * Minette = Chaton  ;   // Les attributs de minette a la meme adresse que chaton 
    cout << "Minette a " << Minette->LireAge() << " ans et pese " <<Minette->LirePoids() << " g" << endl ;
    Minette->Adresse() ;   

    delete Chaton ; 
    delete Minette ; 


    // Question 5 
 
    Chat GrosMinet (1,400) ; 
    Chat  Karine (2 , 800) ; 
    Chat * Attila = new Chat()  ; 
    *Attila = GrosMinet.Bigger(Karine) ; 
    
    cout << "Attila a " << Attila->LireAge() << " ans et pese " << Attila->LirePoids() << " g" << endl ;

    delete Attila ; 
    
    
    // Question 6
    const Chat *pJohn = new Chat() ; 
    Chat const * pAttila = new Chat() ; 
    cout << "John a " << pJohn->LireAge() << "ans" << endl ;   

    // pKitten->DefAge(20) ;  ERREUR 


    return 0 ; 
}
