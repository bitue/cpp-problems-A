
#include<bits/stdc++.h>
using namespace std ;


int main (){

    char arr [1000];
    gets(arr);


   stringstream st ;

   st<<arr;

   int co =0 ;


   string w ;

   while(st>>w) {

        int ch = stoi(w);
        co+=ch;
        //cout<<ch<<endl;

   }

   cout<<co<<endl;

}
