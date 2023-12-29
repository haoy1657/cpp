// Exo2 sans les pointeurs 

// EXO2 , TDn3 

#include <iostream>
#include <string> 
using namespace std ; 


class Chat{

    int  mAge ; 
    int  mPoids; 

    // L'utilisateur manipule des entiers , le code lui manipule des pointeurs alloués dynamiquement 
    public : 
        Chat(int mAge = 0 , int mPoids = 0) {

            this->mAge = mAge  ; 
            this->mPoids = mPoids  ; 
             cout << "(Constructeur par defaut)" <<endl ;
        }

    
    
        int LireAge() {
            return mAge ; 
        }

        int LirePoids() {
            return mPoids;  
        }

        void DefAge(int age ) {
            mAge = age ; 
        }

        void DefPoids(int Poids ) {
            mPoids = Poids ; 
        }

        
        // Constructeur par copie , le const indique que la reference voit ses objets non modifiés 
        
/*         Chat (const Chat & Other ){

            mAge = (Other.mAge); 
            mPoids = (Other.mPoids);
            cout << "(Constructeur par copie)"<<endl ; 
        }
 */
        
        
        
        // Retourne le plus gros des deux 
        Chat Bigger( const Chat & Other) {

            if(  (this->mPoids) < (Other.mPoids) )  {

                // cout <<"Done - Other " <<  *(Other.mAge) ; 
                return Other ; 
                
            }
            cout <<"Done - This" ; 
            return *this ; // Notre objet actuel est le plus gros des deux 

        }


        // A la place d'un constructeur par copie , on utilise la surcharge de " = "
        void operator=( const Chat & Other){

            (this->mAge) = (Other.mAge) ; // Notre Objet actuel  se voit affecter le nom de l'autre l'objet mis en argument 
            (this->mPoids) = (Other.mPoids) ;
            cout <<"(Surcharge de l'operateur = )" << endl ; 

        }



} ; 


int main () {

/*     Chat * Chaton = new Chat(2 , 500) ; 
    Chaton->Adresse() ; 

    Chat * Minette = Chaton  ;   // Les attributs de minette a la meme adresse que chaton 
    cout << "Minette a " << Minette->LireAge() << " ans et pese " <<Minette->LirePoids() << " g" << endl ;
    Minette->Adresse() ;    */


    // Question 5 
 
    Chat Chaton (1,400) ; 
    Chat  Minette (2 , 800) ; 
    Chat Attila  ; 
    Attila = Chaton.Bigger(Minette) ; 
    
    cout << "Attila a " << Attila.LireAge() << " ans et pese " << Attila.LirePoids() << " g" << endl ;

    return 0 ; 
}
