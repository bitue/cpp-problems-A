#include<bits/stdc++.h>
using namespace std ;


class Node {
    public :
        int value ;
        Node * next ;

        Node(int val) {
            this->value = val ;
            this->next = NULL ;

        }

};

void insert_at_tail (Node *&head , int val) {
    Node *temp = head ;
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode ;
        return ;
    }


    while(temp ->next != NULL){
        temp = temp->next ;

    }
    temp->next = newNode ;
    
}

void display (Node *head){
    while(head != NULL){
        if(head->next == NULL){
            cout<<head->value;
        }
        else{
            cout<<head->value<<"->";
        }
        head = head ->next ;
    }
}


int main(){
    int n ;
    cin>>n ;
    int arr [n];
    for(int i=0 ; i<n ; i++){
        
        cin>>arr[i];
    }

    Node *head = NULL ;
    for(int i=0 ; i<n ; i++){
        if(arr[i] % 2 ==0){
             insert_at_tail(head, -1);

        }
        else {
             insert_at_tail(head, arr[i]);
        }
       
       

    }

    display(head);

  


}
