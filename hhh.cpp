#include<bits/stdc++.h>

using namespace std;

int main (){
    string s ;
    cin>>s ;
    int farr[26]={0};
    for(int i=0 ; i<s.length() ; i++){
        int n = (int) s[i] ;

        farr[n-97]++;
    }

    for(int i=0 ; i<26 ; i++){
        if(farr[i]>1){
            cout<<"no";
            return 0;
        }

    }
    cout<<"yes" ; 
    return 0;

}