// Exo2 TD4
#include <iostream>
#include <string>
#include<math.h>
using namespace std ;


class Forme {


    protected : 
        int color ; 


    public : 

        Forme (int color = 0){ 

            this->color = color ; 
        }

        
        void Affiche (){

            cout << "Couleur de la forme  = " << this->color ; 
        }



} ; 



class Cercle : public Forme{


    double xc ; double yc ; // centre du rayon 
    double rayon ; 

    public :  
        Cercle (int color = 0 , double xc = 0 , double yc = 0 , double rayon = 1)  : Forme (color) {
            this-> xc = xc  ; 
            this-> yc = yc ; 
            this-> rayon = 1 ; 
        }
        
        void Affiche() {

            cout << "Cercle de rayon " << this->rayon << " cm , centre en  (" << xc << " , " << yc << ") et de couleur " << this->color << endl ; 
        }

        void Perimetre() {

            cout << "Le perimetre du cercle vaut " << 2*this->rayon*M_PI << " cm" << endl ; 
        }

        
        void Aire() {

            cout << "L'aire du cercle vaut " << this->rayon*this->rayon*M_PI << " cm^2" << endl ; 
        }
        
        



    


}; 


class Rectangle : public Forme {


    double L ; double l ; // L : longeur , l : largeur 
    double x ; double y ;  

    public : 
        Rectangle (int color = 0 , double L = 2 , double l = 1 , double x = 0 , double y = 0 )  : Forme (color) {

            this->L = L  ; 
            this->l = l ; 
            // Un point du rectangle 
            this->x = x ; 
            this->y = y ; 
        }

        void Affiche() {
            cout << "Rectangle de Longeur " << this->L << " cm , de largeur " << this->l  << " cm ;  de point (" << x << " , " << y  << ") et de couleur " << this->color << endl ; 
        }

        
        void Perimetre() {

            cout << "Le perimetre du rectangle vaut " << 2*this->L + 2*this->l << " cm" << endl ; 
        }

        
        void Aire() {

            cout << "L'aire du rectangle vaut " << this->l*this->L << " cm^2" << endl ; 
        }
        





}; 


class Carre : public Rectangle {


    double L ; double l ; // L : longeur , l : largeur 
    double x ; double y ;  // Point en haut à gauche 

    public : 
        Carre (int color = 0 , double L = 2 , double x = 0 , double y = 0 )  : Rectangle (color) {

            // Note : l'attribut color avec la classe rectangle 
            // Utiliser la classe mere Forme ne marche pas , on ne peut pas sauter des classes 

            this->L = L  ; // Coté du carré 
            this->l = L ; 
            // Un point du carré
            this->x = x ; 
            this->y = y ; 
        }

        void Affiche() {
            cout << "Carre de cote " << this->L << " cm , de point (" << x << " , " << y  << ") et de couleur " << this->color << endl ; 
        }

        
        void Perimetre() {

            cout << "Le perimetre du carre vaut " << 4*this->L << " cm" << endl ; 
        }

        
        void Aire() {

            cout << "L'aire du carre vaut " << this->L*this->L << " cm^2" << endl ; 
        }
        





}; 






int main () {

    Rectangle Rec(1,10,5,0,0) ; 
    Rec.Affiche() ; 
    Rec.Perimetre() ; 
    Rec.Aire() ; 
    cout <<endl <<endl ; 

    Cercle Circle(2,4,4,3) ; 
    Circle.Affiche() ;
    Circle.Perimetre() ; 
    Circle.Aire()  ; 

    cout <<endl <<endl ; 

    Carre Square(3,7,0,0) ; 
    Square.Affiche() ; 
    Square.Perimetre() ; 
    Square.Aire() ; 
    



    return 0;  
}