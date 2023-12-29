// Map == équivaut à un dictionnaire en python : une clé associée à une valeure 

#include <iostream>
#include <string>
#include <vector>
#include <map>


using namespace std ; 


int main () {


    // MAP 

    map<char,int> mp = {

        {'T',7},
        {'S',6},
        {'a',4}

    } ; 

    /* Acces elements 
    cout << mp['S'] << endl ; */

    /* Key that doesn't exist : 
    cout << mp['u'] << endl ; ==> affichera 0 */ 

    // Add 'u' to the map 
    // mp['u'] = 9 ; 
    // or 
    mp.insert(pair<char,int>('u',5)) ; 
    cout << mp['u']  << endl ;

    //or 

    pair<char,int> p1('s',10) ; 
    mp.insert(p1) ; 
    cout << mp['s']  << endl ;

    // Access pair's elements 
    cout << p1.first << " & " <<  p1.second << endl ; 

    // Erase elements
    mp.erase(p1.first) ; 
    cout << mp['s'] << endl ; // will print 0 ; 

    /* Clear map 
    mp.clear() ; */ 

    // Check if a map is empty 
    mp.empty() ; // boolean 

    // Size
    mp.size() ; 




    return 0 ; 
}