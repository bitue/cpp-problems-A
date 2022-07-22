#include<bits/stdc++.h>
using namespace std ;


char * int_to_str_arr (int n ) {

    string s ;
    s = to_string(n);
    int k = s.length();
    char arr[k] ;
    for(int i =0 ; i<k ; i++){
        arr[i]=s[i];
    }

    return arr ;



}

int main () {

    string n ;
    cin>>n ;

   char *str =  int_to_str_arr(n);
   cout<<str ;















}
