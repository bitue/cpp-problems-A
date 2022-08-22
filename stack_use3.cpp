#include<bits/stdc++.h>
#include"stack_temp.h"
using namespace std ;

void insert_bottom(Stack <int> &st , int chk_element){

    if(st.is_empty()){
        st.push(chk_element);
        return ;

    }

    int top_element = st.Top();
    st.pop();
    insert_bottom(st, chk_element);
    st.push(top_element);



}


void reverse_stack (Stack<int> &st){

    if(st.is_empty()) {
        return ;
    }

    int topElement = st.Top() ;
    st.pop();
    reverse_stack(st);
    insert_bottom(st, topElement);


}



int main (){

    Stack<int> st ;
    st.push(1);
     st.push(2);
      st.push(3);
       st.push(4);
        st.push(5);
    

    reverse_stack(st);
    
    while(!st.is_empty()) {
        cout<<st.pop()<<" ";
    }



}