#include<bits/stdc++.h>
using namespace std ;

void rev_str (string s, int l , int co){
   // int static co =0 ;

    if(l==co){
        return ;
    }
    co++;
    rev_str(s, l ,co);
    cout<<s[co-0]<<" ";
  

}

int sum (int n ) {
    if(n==0) return 0 ;
    
    return   n + sum(n-1) ;
}

int main (){

//     string s ;
//     cin>>s ;
//     int l = s.length();

//    //rev_str(s, l, -1);

    int n ;
    cin>>n ;

    int res = sum(n);
    cout<<res<<endl;
    

}