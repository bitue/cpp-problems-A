#include<bits/stdc++.h>
using namespace std ;


int main (){

    string s ;
    cin>>s ;
    int ls = s.length() ;
    int m ;
    if(ls %2 ==0){
        m= ls/2 +1 ;
    }
    else {
        m = ls/2 + 2 ;
    }
    string n ="";

    for(int i=0 ; i<ls ; i++){
        if( (i+1 ) %2 ==1){
            n = n + s[i];
        }
    }

    cout << n <<endl;


}
