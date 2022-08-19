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
            cout<<head->value<<"-->";
        }
        head = head ->next ;
    }
}

int length (Node *head){
    int l =0 ;

    while(head != NULL){
        l++;
        head = head->next;

    }
    return l;

}

void recurr(Node *head ,  int k, int len){

    if(k == len){
        return ;
    }

    recurr(head->next, k, len+1);

 
    cout<<head->value<<" ";
  

     
}



int main(){
    int n , t ;
    cin>>n >> t ;
    int arr [n];
    for(int i=0 ; i<n ; i++){
        
        cin>>arr[i];
    }

    Node *head = NULL ;
    for(int i=0 ; i<n ; i++){
       
        insert_at_tail(head, arr[i]);

    }

    int len = length(head);
    while(t--){
        int k ;
        cin>>k;
        recurr(head, k, 0);

    }


}
