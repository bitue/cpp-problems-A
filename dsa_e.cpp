#include<bits/stdc++.h>
using namespace std ;

int main (){

    int a , b, c ;
    int curr[101]={0};

    cin>>a>>b>>c ;
    curr[a]++;
    curr[b]++;
    curr[c]++;

    // count the diff
    int co =3 ;

    for(int i=0 ; i<101; i++){
        if(curr[i]==2){
            co--;
        }
        if(curr[i]==3){
            co-=2;
        }
    }

    cout<<co<<endl;



}
