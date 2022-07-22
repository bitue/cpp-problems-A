#include<bits/stdc++.h>
using namespace std ;

int main (){


    string o , e ;
    cin>>o>>e ;
    int lo = o.length();
    int le =e.length();
    char out[lo+le+1] ;
    int i=0 ;
    while( (o[i]!='\0') && (e[i]!='\0' )) {
        out[i+i]=o[i];
        out[i+i+1]=e[i];
    }
    out[lo+le]=o[i];

    cout<<out<<endl;
}