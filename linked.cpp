#include<bits/stdc++.h>

using namespace std ;

class Node {

public :
    int value ;
    Node * next ;


    Node (int val){

        this->value = val;
        this->next = nullptr ;

    }




};

void add_to_head (Node *&head , int val) {

    Node * newNode = new Node(val);
    newNode->next = head ;
    head = newNode ;
}

void add_to_tail(Node *&head , int val) {
    Node* newNode = new Node(val);
    if(head == nullptr) {
        head = newNode ;
       // cout<<"f"<<endl;
    }
    else {

         Node *temp = head ;

         while(temp->next !=nullptr){
             //cout<<"fl"<<endl;
           temp = temp->next ;

         }
         temp->next = newNode ;

    }

}


void reversedListPrint(Node *head) {
  if(head->next == NULL) {

    cout << head->value << " ";
    return;
  }
  reversedListPrint(head->next);
  cout << head->value << " ";
};


void display_node (Node * head ) {

    cout<<"display the all values"<<endl;
    while(head != nullptr) {
        cout<<head->value<<endl;
        head = head->next ;
    }
}

void reverse_link_it (Node *& head ) {

    Node * prev = nullptr ;
    Node * nextNode = head ;
    Node * curr = head ;

    while(1) {

        if(curr->next == nullptr) break ;
        nextNode = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = nextNode;

    }

    head = curr ;

}


int main (){

    Node * head = nullptr ;

    while (true) {
        int n ;
        cin>>n ;
        if(n>=0){
            add_to_tail(head, n);
        }

        else {
            break ;
        }



    }
    reversedListPrint(head);
  // reverse_link_it(head);
   //display_node(head);








}


