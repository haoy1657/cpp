#include <iostream>
using namespace std;




//La première additionne deux entiers (type int)

int Addition (int a , int b) {

    return (a + b) ; 
}


// la deuxième deux réels (type float)

float Addition (float a , float b) {

    return (a + b) ; 
}


// la troisième deux tableaux de dix entier


int Addition ( int Array1[] , int Array2[] , int * ptr) {
    
    // Boucle for 
    for (int i=0 ; i < *ptr  ; i++)  {
        cout << Array1[i] + Array2[i] <<" " ; 
        } 
    cout <<endl ; 
    return 0 ; 
}

// faire Addition2 ou l'on somme tous les elements 

// Fonction pour afficher un array 
void Display(int size , const int a[]) {

    for (int n = 0; n < size ; n++) {
        cout << a[n] << "  ";
    }

}



int main() {

    int a = 1 ; 
    int b = 3 ;  
    cout << "a + b = " <<  Addition(a,b) << " (int)"<<endl ; 

    float c = 1.0 ; 
    float d = 3.0;  
    cout << "a + b = " <<  Addition(c,d)  << " (float)"<<endl ; 

    int size = 10 ; 
    int *ptr = &size ; // Pointe sur l'addresse de size

    int array1[*ptr] = {0,7,2,7,4,1,2,6,8,1}; 
    int array2[*ptr] = {11,0,7,1,0,0,2,9,8,3}; 
    cout << "array1 + array2 = " <<  Addition(array1,array2 , ptr )  << endl ; 

    
    
    // Test avec deux shorts
    short x = 300.3 ; 
    short y = 301.6 ; 
    cout << "a + b = " <<  Addition(x,y)  << " (short)"<<endl ; 
    
    
    return 0 ; 



}

// Note : *ptr correspond à la valeur contenue dans la case mémoire sur laquelle le pointeur pointe 