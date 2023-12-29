// TDn2 , EX2 

#include<iostream>
using namespace std;


class Complexe {

    float reel ; 
    float imag ; 

    public : 
        Complexe(float reel = 0 , float imag = 0){

            this->reel = reel ; 
            this->imag = imag ; 
        }
        // Setters 
        // void get_Complexe( float reel ){  } ; 

        bool reelPur(); 

        ~ Complexe(){};  // Destructeur . On libere de la memoire


} ; 


bool Complexe::reelPur() {

        if (this->imag == 0){
            return true ; }
            else{ return false ; }
        }

int main () {
    Complexe z1(1) ; 
    Complexe z2(5,4) ; 

    if (z1.reelPur()==true) {
        cout << "Complexe reel pur" << endl ; 
    }

    return 0 ; 
}