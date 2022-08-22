#include<bits/stdc++.h>
using namespace std ;


class Node {
    public :
        int value ;
        Node *next ;
        Node *prev ;

        Node (int val){
            this->value = val ;
            this->next = NULL;
            this->prev = NULL;

        }
};

class Stack {

    Node *head ;
    Node *top ;
    int len =0 ;

    //push 

    public :
        Stack (){
            this->head = NULL ;
            this->top = NULL;
        }
        void push (int val){
            // newNode creation 
            Node *newNode = new Node(val);
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

        int pop () {
            int res ;
            if(head == NULL){
                cout<<"There is no element in the stack"<<endl;
                return -1 ;

            }
            else if(head == top ) {
                res = head->value ;
                head = top = NULL ;
                this->len--;
                return res ;

            }
            else {
                Node * dellNode = top ;
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

        int Top (){
            if(top == NULL){
                cout<<"Stack underflow"<<endl;
                return -1 ;
            }
            else {
                return top->value ;
            }
        }
    

};

