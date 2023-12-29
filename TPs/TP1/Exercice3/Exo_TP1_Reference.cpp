// Exo 3 avec le Passage par reference 

// Exercice 3 TPn1

#include <iostream>
using namespace std;

/* On déclare trois nombres réels a, b, c (float) dans le main(), et on leur attribue des valeurs arbitraires,
par exemple a=10.5, b=-5.3 et c=-0.2. On désire écrire une fonction ordonnetrois (à
définir) qui puisse manipuler ces trois variables passées en paramètre et les ordonner par ordre croissant
en permutant leurs valeurs. Afin de simplifier le problème, on décide d’écrire d’abord une fonction
ech2paradresse() qui effectue le tri sur seulement deux paramètres à la fois, et dont on se sert pour
ensuite écrire ordonnetrois(). Dans cet exercice, vous utiliserez lorsque c’est nécessaire un passage
de paramètres par adresse. On reprend la même question mais on décide d’utiliser des passages par
référence. */


void ech2paradresse(float &a , float &b ) {

    float val ; // Valeur intermediaire 
    if(a > b){
    val = a ; 
    a = b ; 
    b = val ; 
    }

    
}

void  ordonnetrois(float &a , float &b ,  float &c) {

    // Tri entre chaque couple possible 
    ech2paradresse(a , b) ; 
    ech2paradresse(a , c) ; 
    ech2paradresse(b,  c) ; 
    cout << a << " < " << b << " < " << c << endl ; 

}


int main () {

    // le but est d'obtenir un tri dans l'ordre croissant 
    float a = 10.5 ; float b = 5.3 ; float c = 0.2 ; 

    float & ar = a ; float & br =b   ; float & cr = c ;  // References sur les variables a , b , c

    // Tout ce qui sera fait sur les references sera fait à a , b , c 

    ordonnetrois(ar , br,  cr) ;
    
    return 0 ; 
}

