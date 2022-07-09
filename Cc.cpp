#include<bits/stdc++.h>

using namespace std ;


int main () {

    int f [26]={0};
    string s ;
    cin >>s ;
    for(int i=0 ; i<s.length(); i++) {
        int n  =(int) s[i] ;
        f[n-97] ++ ;
    }

    for(int i =0 ; i<26 ; i++){
        if(f[i]==0){
            char c = i+97 ;
            cout<<c;
            return 0;
        }
    }
    cout<<"None";



}
