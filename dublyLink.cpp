#include<bits/stdc++.h>
using namespace std ;

class DoublyNode {
    public :
    int value ;
    DoublyNode * prev ;
    DoublyNode * next ;

    DoublyNode (int val){
        this->value = val;
        this->next = NULL;
        this->prev = NULL;
    }


};


void insert_at_tail (DoublyNode *&head , int val){

    DoublyNode *newNode = new DoublyNode(val);
    if(head == NULL){
        head = newNode ;
        return ;
    }
    DoublyNode * temp = head ;

    while(temp->next !=NULL){
        temp= temp->next ;

    }
    temp->next = newNode ;
    newNode->prev = temp ;
}

int len(DoublyNode *head) {
    int l =0 ;
    if(head == NULL){
        return l;
    }
    else {
        while(head != NULL){
            head = head ->next ;
            l++ ;
        }
        return l;

    }

}


void display(DoublyNode *&head ){
    DoublyNode * temp = head ;

    while(temp != NULL){
       
        if(temp->next == NULL){
            cout<<temp->value<<endl;

        }
        else {
            cout<<temp->value<<"<---->";
        }

        temp = temp->next ;

        

    }
}

void insert_at_head (DoublyNode *&head , int val){
    DoublyNode * newNode =new DoublyNode(val);
    if(head == NULL){
        head = newNode ;
        return ;
    }
    else {
       head ->prev = newNode ;
       newNode ->next = head ;
       head = newNode ;
    }



}

void reverse_display (DoublyNode *&head){
   DoublyNode *temp = head ;
   while(temp->next != NULL){
        temp = temp->next ;
   }

   while(temp !=NULL){
    if(temp->prev == NULL){
        cout<<temp->value;
    }
    else {
        cout<<temp->value<<"<-->";
    }
    
    temp =temp->prev;
   }
}



int main (){

    int ch ;
    cout<<"Choice 0 to exit"<<endl
        <<"1 to head insert at tail"<<endl
        <<"2 print the length"<<endl
        <<"3 display"<<endl
        <<"4 insert at head"<<endl
        <<"5 reverse print "<<endl;
        
    cin>>ch;


    DoublyNode *head = NULL ;

    while(ch!=0){
        if(ch==1){
            int val ;
            cout<<"enter the value"<<endl;
            cin>>val ;
            insert_at_tail(head , val);
        }
        else if(ch ==2 ){
            int res = len(head);
            cout<<res<<endl;

        }
        else if(ch==3){
            display(head);
        }
        else if (ch == 4 ) {
            int val ;
            cout<<"Enter the value "<<endl;
            cin>>val;
            insert_at_head(head , val);
        }

        else if(ch== 5){
            reverse_display(head);
        }

        cout<<"Enter the choice "<<endl;
        cin>>ch;


    }




}