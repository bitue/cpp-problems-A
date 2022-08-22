#include<bits/stdc++.h>
using namespace std ;

int main (){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int ear[n]={0};
        int exp[n]={0};
        for(int i=0 ; i<n ; i++) cin>>ear[i];
        for(int i=0 ; i<n ; i++) cin>>exp[i];

        int k ;
        cin>>k ;
        while(k--){
            int d ;
            cin>>d ;
            int co_e =0 ;
            int co_ex =0 ;
            for(int i=0 ; i<=d ; i++){
                co_e += ear[i];
                co_ex+= exp[i];
            }
            if(co_e > co_ex){
                cout<<1;
            }
            else {
                cout<<0;
            }
        }

    }
}