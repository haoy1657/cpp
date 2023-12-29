#include <iostream>
using namespace std;
#include <string>



double delta() ; 

int main(void) { 

    double delt ; 
    delt = delta() ; 

    if (delt == 0)
    {cout << "Une solution réelle" ; 
    return 0 ; }

    if (delt < 0)
    {cout << "Deux solution Complexes" ; 
    return 0 ; }

    
    if (delt > 0)
    {cout << "Deux solution Reelles" ; 
    return 0 ; }
    
}


double delta() {

    int discr ; 
    double x1 ; 
    double x2 ; 
    double x0 ; 
    
    cout << "Coefficient de degres 2 : "; // Invite de commande 
    cin >> x2 ; 
    
    cout << "Coefficient de degres 1 : "; 
    cin >> x1 ; 
    
    cout << "Coefficient de degres 0 : "; 
    cin >> x0; 
    
    discr = x1*x1 - 4*x2*x0 ; 
    return discr ; 

}



