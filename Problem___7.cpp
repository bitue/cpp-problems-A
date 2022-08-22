#include<bits/stdc++.h>
using namespace std ;

class Node {
    public :

        int value ;
        Node * next ;

        Node (int value){
            this->value = value ;
            this->next = nullptr ;
        }


};


void insert_at_tail(Node *&head , int val) {
    Node *newNode = new Node(val);

    if(head == nullptr){
        head = newNode ;
    }
    else {
        Node * temp = head ;

        while(temp->next != NULL){
            temp = temp->next ;
        }
        temp->next = newNode ;

    }
}

void print_all_node_values (Node *n ) {
    if(n == NULL){
        cout<<"linked list is empty"<<endl;
    }
    while(n ->next !=  nullptr){
        
        cout<<n->value<<"-> ";
        // update the n value 
        n = n->next ;
        


    }
    cout<<n->value;
    cout<<endl;
   // cout<<"done all "<<endl;

}

Node * reverse_recursive (Node *&head, int k){
    if(k==0){
        return head ;
    }

    Node *newNode = reverse_recursive(head->next, k-1);
    head->next->next = head ;
    head->next= NULL ;
    return newNode ;
}


Node *  findNode(Node *&head ,int k){
    Node *temp = head ;
    for(int i=0 ; i<k ; i++){
        temp = temp->next ;
    }
    return temp ;

}

void join_two(Node *&one , Node *&two){

    Node *t = one ;
  
    while(t->next!= NULL){
        t = t->next ;
    }
    t->next = two ;
}


int length (Node *head){
    int l =0 ;

    while(head != NULL){
        l++;
        head = head->next;

    }
    return l;

}

int main (){
      Node * head = nullptr ;

      int n  ;
      cin>>n ;
      int arr[n];
      for(int i=0 ; i<n ; i++){
        cin>>arr[i];
      }
      int k ;
      cin>>k;

    for(int i=0 ; i<n ; i++){
            insert_at_tail(head, arr[i]);
      }
    // print_all_node_values(head);
    // cout<<endl;

    Node * res = findNode(head, k);
    // cout<<res<<endl;

    int len = length(head);



    head =  reverse_recursive(head, k-1);
    Node *end = reverse_recursive(res , len-k-1);
       

    // print_all_node_values(head);
    // print_all_node_values(end);

    join_two(head, end);


    print_all_node_values(head);

}