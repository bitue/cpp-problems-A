#include<bits/stdc++.h>
using namespace std ;

class CircularNode {

    public :
        int val ;
        CircularNode *next ;

        CircularNode(int val){
            this->val = val;
            this->next= NULL;
        }


};


void insert_at_tail (CircularNode *&head , int val){
    CircularNode *temp = head ;
    CircularNode * newNode = new CircularNode(val);

    if(head == NULL){
        head = newNode ;
        newNode->next = head ;
        return ;


    }

    while(temp ->next != head){
        temp= temp->next ;
    }
    temp->next = newNode ;
    newNode->next = head ;
}

void print(CircularNode *&head){
    CircularNode *n = head ;
    if(head == NULL){
        cout<<"No value in the linked list"<<endl;
        return ;
    }
    while(n->next != head) {
        cout<<n->val<<"-->";
        n = n ->next ;
    }
    cout<<n->val;
    return ;

}

int count_length (CircularNode *&head){
    CircularNode *temp = head ;
    int l=0;
    do {
        temp = temp->next ;
        l++;

    }while(temp!= head) ;


    return l;
}

int main (){
      cout<<"0 for exit "<<endl
        <<"1 for insert at head "<<endl
        <<"2 for insert at tail "<<endl
        <<"3 for print all nodes "<<endl
         <<"4 count length "<<endl;
        
    int ch ;
    cout<<"Enter the choice "<<endl;
    cin>>ch;

    CircularNode *head = NULL ;
  

    while(ch != 0){

        if(ch == 2){
            int value ;
            cout<<"Enter the value "<<endl;
            cin>>value ;
            insert_at_tail(head, value);


            
        }
        else if(ch == 3 ){
            print(head);

        }

        else if(ch == 4){
            int res = count_length(head);
            cout<<res<<"=> Length "<<endl;

        }

        cout<<endl;
        cout<<"enter the choice again "<<endl;
        cin>>ch ;

    }
}