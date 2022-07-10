#include<bits/stdc++.h>
using namespace std ;

int main (){


    string o , e ;
    cin>>o>>e ;
    int lo = o.length();
    int le =e.length();
    //cout<<lo<<le ;
    char out[lo+le+1] ;
   // cout<<lo <<le <<"lo and le ka length";



    int i;
    for( i =0 ;i<le ; i++){
        out[i+i]=o[i];
        out[i+i+1]=e[i];
    }
    if(lo >le){
        out[lo+le-1] = o[i];
    }

    out[lo+le]= '\0';


    cout<<out<<endl;
}
