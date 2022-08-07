#include<bits/stdc++.h>

using namespace std ;

class Node {

public :
    int value ;
    Node * Next ;
};

void display (Node * n) {

    while(n!=nullptr) {




        cout<<"Address Link value :"<<n->Next<<"  => " <<"Value : "<<n->value <<endl ;
          n = n->Next ;
    }


}


int main (){


    Node * first = new Node();
    Node * second =  new Node();
    Node * third = new Node();


    //

    first->value = 10 ;
    second->value = 12 ;
    third ->value = 100;
    // linked

    first ->Next = second ;
    second->Next = third ;
    third ->Next = NULL ;

    // define f_node






    // display the liked list value ;

    display(first);


}
