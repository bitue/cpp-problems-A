#include<bits/stdc++.h>

using namespace std ;

int main (){

    string S , O ;
    cin>>S >> O ;
    //cout<<S.length()<<O.length()<<endl;
    char out[S.length() + O.length() -2] ;


    for(int i =0 ; i<S.length()  ; i++){

        out[i+i]=S[i] ;
        if(i<O.length()){

            out[i+i+1]=O[i];

        }



    }

    cout<<out;





}
