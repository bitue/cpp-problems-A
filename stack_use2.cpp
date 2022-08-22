#include<bits/stdc++.h>
#include"stack_temp.h"
using namespace std ;


void make_word (string s ){
    Stack <string> st ;

    for(int i =0 ; i<s.length(); i++){
        string word ="";


        while(s[i] != ' ' &&  i<s.length()){
            word+=s[i];
            i++;
        }

        st.push(word);

       

    }

    while(!st.is_empty()){
        cout<<st.pop()<<" ";

      
    }
}



int main (){

    string s ;
    s = "I love you farha ";
    
    make_word(s);

    

}

