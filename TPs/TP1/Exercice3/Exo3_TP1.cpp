// Exercice 3 TPn1

#include <iostream>
using namespace std;
#include<string>

/* On déclare trois nombres réels a, b, c (float) dans le main(), et on leur attribue des valeurs arbitraires,
par exemple a=10.5, b=-5.3 et c=-0.2. On désire écrire une fonction ordonnetrois (à
définir) qui puisse manipuler ces trois variables passées en paramètre et les ordonner par ordre croissant
en permutant leurs valeurs. Afin de simplifier le problème, on décide d’écrire d’abord une fonction
ech2paradresse() qui effectue le tri sur seulement deux paramètres à la fois, et dont on se sert pour
ensuite écrire ordonnetrois(). Dans cet exercice, vous utiliserez lorsque c’est nécessaire un passage
de paramètres par adresse. On reprend la même question mais on décide d’utiliser des passages par
référence. */


void ech2paradresse(float *a , float*b ) {

    string State ; 
    float val ; // Valeur intermediaire 
    if(*a > *b){
    val = *a ; 
    *a = *b ; 
    *b = val ;  
    }

    
}

void  ordonnetrois(float *p1 , float* p2 ,  float *p3) {

    string Etat_1; 
    // Tri entre chaque couple possible 
    ech2paradresse(p1 , p2 ) ; 
    ech2paradresse(p1 , p3 ) ; 
    ech2paradresse(p2 , p3 ) ; 
    cout << *p1 << " < " << *p2 << " < " << *p3 << endl ; 

}


int main () {

    // le but est d'obtenir un tri dans l'ordre croissant 
    float a = 10.5 ; float b = 5.3 ; float c = 0.2 ; 

    float*p1 = &a ; float*p2 = &b ; float*p3 = &c ;  // Pointeurs

    ordonnetrois(p1 , p2 ,  p3) ; 
    
    return 0 ; 
}

