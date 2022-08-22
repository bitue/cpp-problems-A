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

int length (Node *head){
    int l =0 ;

    while(head != NULL){
        l++;
        head = head->next;

    }
    return l;

}

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



// delete at spec pos 


void delete_head (Node *&head) {
    if(head == NULL){
        cout<<"There is no value in linked list yet !!"<<endl;
    }
    else {
        Node *temp = head ;
        head = temp->next ; // we need to update the head value so we need pointer ka address hae 
        delete temp ;
    }
   
}

void delete_tail (Node *&head) {
    Node *temp = head ;
    if(head == NULL){
        cout<<"There is no value in linked list yet !!"<<endl;
    }
    else if(temp->next == NULL){
       delete_head(head);
    }
   
    else {
        while(temp->next->next != NULL){
        temp = temp->next ;
        }
        Node *dellNode = temp->next ;
        temp->next = NULL ; 
        delete dellNode ;

    }
   
}

void delete_at_specific_pos (Node *&head , int pos){
    Node *temp = head ;
    if(temp == NULL){
        cout<<"Linked list is empty"<<endl;
    }
    else if (pos ==1){
        delete_head(head);
    }
    else {
        for(int i=1 ; i<pos-1 ; i++){
        temp = temp->next ;

        }
        Node * dellNode = temp->next ;
        temp->next = dellNode->next ;
        delete dellNode ;

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
        insert_at_tail(head, arr[i]);
    }

    display(head);

    int x;
    int y ;
    cin>>x>>y ;
    int len = length(head);
    cout<<len<<endl;
    int k =1 ;

    int temp ;
   while(x*k+1 < len){
        temp = y ;

        while(temp--){
          
            if(x*k+1 > len )
                break;
           else{
                delete_at_specific_pos(head, x*k+1);

               // cout<<x*k+1<<endl;

           }
            len--;
        }
        k++;
   }
    display(head);
}
