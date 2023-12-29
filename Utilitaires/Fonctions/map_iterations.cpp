// Map == équivaut à un dictionnaire en python : une clé associée à une valeure 

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std ; 



int count (char c , string s) {
    
    auto count  = 0 ; 
    for(int i = 0 ; i < s.length() ; i++){ if (std::toupper(s[i]) == std::toupper(c)){ count ++ ; } }
    return count ; 

}


auto func(string str) {

    // Shall return the frequency of each char

    map<char,int> freq ; 
    
    for (int it = 0 ; it < str.length() ; it++){

        if(str[it] != ' '){freq.insert( pair<char,int> ( str[it],count(str[it],str) ) ) ; }  

    }

    return freq; 
}


void disp(map<char,int> map) {

    for ( auto it = map.begin() ; it!= map.end() ; ++it){
       // cout << (*it).first << " & " << (*it).second << endl ;
        cout << (it)->first << " & " << (it)->second << endl ; 
    }

}






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
    
    /*
    mp.insert(pair<char,int>('u',5)) ; 
    cout << mp['u']  << endl ;

    for ( auto it = mp.begin() ; it!= mp.end() ; ++it){
       // cout << (*it).first << " & " << (*it).second << endl ;
        cout << (it)->first << " & " << (it)->second << endl ; 
    }
    */

    auto freq = func("hi there") ; 
    disp(freq) ; 



    return 0 ; 
}