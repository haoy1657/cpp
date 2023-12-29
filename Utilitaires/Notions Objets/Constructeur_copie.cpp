#include <iostream>
using namespace std ; 

// Constructeur par copie  


class Complex {
    private:
        double im;
        double re;
    public:
        Complex() {
            re = im = 0;
            cout << "Complex: Constructeur par defaut" << endl;
        }
        
        Complex( const Complex &c ) { // Par réference à un objet complexe 
            re = c.re; // La partie réelle de notre objet sera celle de l'objet passé en argument (copie)
            im = c.im;
            cout << "Complex: Constructeur par copie" << endl;
        }
};


int main() {
    Complex c1 ;
    Complex c2 (c1) ; 

return 0;
}