#include <iostream>
using namespace std ; 



int diviser (int a , int b ) {
    return (a / b);
}

// Surcharge  : 
double diviser (double a , double b ) {

     return (a / b); 
}

float diviser (float a , float b ) {

     return (a / b); 
}




int main (void) {
 
     int a ; int b ;
     float c ; float d ; 
     double e ; double f ;  
    

    cout << "Choississez deux entiers a et b :  " << endl ; 
    cin >> a >> b ; 
    cout<< "Le resultat est : " << diviser(a,b) << endl ; 

    cout << "Choississez deux floats a et b :  " << endl ; 
    cin >> c >> d ; 
    cout<< "Le resultat est : " << diviser(c,d) << endl ; 

    cout << "Choississez deux doubles a et b :  " << endl ; 
    cin >> e >> f ; 
    cout<< "Le resultat est : " << diviser(e,f) << endl ; 

    return 0 ;

}

