#include<bits/stdc++.h>
using namespace std ;


int main (){

    string s ;
    cin>>s ;
    int co_a =0 ;
    int co_z =0 ;
    bool flag = true  ;


    for(int i =0 ; i< s.length(); i++){
        if(s[i]=='A' && flag){
            co_a = i;
            flag = false ;
        }
        if (s[i]=='Z'){
            co_z = i;
        }
    }

    cout<<co_z - co_a + 1<<endl;


}
