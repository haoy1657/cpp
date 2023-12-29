#include<iostream>
using namespace std;

class Chat {

    int * mAge   ; // Pointeur sur un entier 
    int * mPoids ; 

    public : 
    Chat ( int mAge = 1 , int mPoids = 2 ){

       // On assigne une valeur aux pointeurs déclarés plus haut 
       // L'utilistauer manipule des entiers et le code des pointeurs 
       this->mAge = new int(mAge) ; // Allocation dynamique  
       this->mPoids = new int(mPoids) ;  

    }

    int LireAge() ; 
    void DefAge(int Age) ; // Modifier l'age sans passer par le constructeur

    ~Chat() ;   // Destructeur 
} ; 


int Chat::LireAge() {

    return *(this->mAge) ; 
}

void Chat::DefAge(int Age) {

    *(this->mAge) = Age ; 
    cout << "Le chat est maintenant age de " <<  *(this->mAge)  << " ans" << endl ; 

}

Chat::~Chat(){ delete mAge ; delete mPoids ; } 


int main() {

    Chat * Karine = new Chat() ; // Type * Name = new type Value 
    cout << "Le chat est age de " << Karine->LireAge() << " ans"<<endl ; 
    Karine->DefAge(44) ; 
    
    return 0 ; 

    // L’accès aux attributs de l’objet se fait donc par l’opérateur ->
}