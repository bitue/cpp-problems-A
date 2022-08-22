#include<bits/stdc++.h>
using namespace std ;


template<typename T> class Node {
    public :
        T value ;
        Node *next ;
        Node *prev ;

        Node (T val){
            this->value = val ;
            this->next = NULL;
            this->prev = NULL;

        }
};

template<typename S> class Stack {

    Node <S> *head ;
    Node<S> *top ;
    int len =0 ;

    //push 

    public :
        Stack (){
            this->head = NULL ;
            this->top = NULL;
        }
        void push (S val){
            // newNode creation 
            Node <S> *newNode = new Node<S>(val);
            if(head == NULL){
                head = newNode ;
                top = newNode ;
                this->len ++ ;
                return ;
            }
            else {
                top->next = newNode ;
                newNode->prev = top ;
                top = newNode ;
                this->len++;
                return ;
            }


        }

        S pop () {
            S res ;
            if(head == NULL){
                cout<<"There is no element in the stack"<<endl;
                return res ;

            }
            else if(head == top ) {
                res = head->value ;
                head = top = NULL ;
                this->len--;
                return res ;

            }
            else {
                Node <S> * dellNode = top ;
                res = dellNode->value ;
                this->len --;
                top =  dellNode->prev ;
                top->next = NULL ;
                delete dellNode ;
              


            }
            return res ;
           
        }

        int size (){
            return len ;
        }

        bool is_empty (){
            if(head == NULL){
                return true ;
            }
            else{
                return false ;
            }

        }

        S Top (){
            S res ;

            if(top == NULL){
                cout<<"Stack underflow"<<endl;
                return res ;
            }
            else {
                return top->value ;
            }
        }

        S mid (){
            int mid = len/2 ;
            Node<S> temp = head ;
            for(int i =0 ; i<mid ; i++){
                temp= temp->next ;

            }

            return temp->value ;
        }
    

};

