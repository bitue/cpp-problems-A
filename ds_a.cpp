#include<bits/stdc++.h>
using namespace std ;


int main (){

    int t ;
    cin>>t ;

    while(t--){


        string s ;
        cin>>s ;


    bool start = false ;

    for(int i=0 ; i<s.length(); i++){
       if(s[i]=='1' ) {
            start = true ;

       }
       if(s[i]=='1' && start ){
            cout<<"NO"<<endl;
            return 0;
       }
    }
    if(!start) {
        cout<<"NO"<<endl;
    }
    if(start){
        cout<<"YES"<<endl;
    }


    }


}
