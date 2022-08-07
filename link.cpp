#include<bits/stdc++.h>
using namespace std ;

class Node {

public :
    int value ;
    Node *Next ;

    Node (int val) {
        this->value = val ;
        this->Next = NULL ;
    }
};


void create_linked_tail (Node *&head , int val) {

    Node *newNode = new Node(val);

    if(head == nullptr) {
        head = newNode ;

    }
    else {

        Node *temp = head ;
        while(temp->Next != NULL) {

            temp = temp ->Next ;
        }
        temp->Next = newNode ;



    }


}


void create_linked_head (Node head , int val) {

    Node * newNode = new Node(val);

    newNode->Next = head ;
    head = newNode ;



}

void display (Node *head) {

    while(head !=NULL){
        cout<<head->value <<endl;
        head = head ->Next ;
    }


}


int main (){


    // first Need to create HEAD

    Node * head = NULL ;

    while(true) {
        cout<<"enter the value "<<endl;
        int n ;
        cin>>n ;

        cout<<"Y / N"<<endl;
        char ch ;
        cin>>ch ;
        cout<<"1 for appent at head 2 for append for tail "<<endl;
        int c ;
        cin>>c ;
        if(c ==1) {
               create_linked_head(head ,n );
        }
        if(c==2) {
            create_linked_tail(head, n);
        }

        if(ch == 'N' || ch =='n') {
            break ;
        }

    }


    //display

    display(head);








}
