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

struct Output_arr {
   int sz ;
   int poses[1000];
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

void insert_at_head (Node *&head , int val){

    Node * newNode = new Node(val);
    newNode->next = head ; // first => newNode address ta change 
    head = newNode ; // second => head er moddhe newNode add kora 

}

void print_all_node_values (Node *n ) {
    if(n == NULL){
        cout<<"linked list is empty"<<endl;
    }
    while(n ->next !=  nullptr){
        
        cout<<n->value<<"->";
        // update the n value 
        n = n->next ;
        


    }
    cout<<n->value;
    cout<<endl;
    cout<<"done all "<<endl;

}

int print_length_of_linked_list (Node * n) {
    int co =0 ;

    if(n ==nullptr){
        return 0;
    }
    while(n != NULL){
        co++ ;
        n = n ->next ;
    }

    return co ;

}

void add_to_specific_pos(Node *head , int pos , int val){
    Node *newNode = new Node(val);
   
    for(int i =1 ; i<pos-1 ; i++){
        head = head ->next ;
    }
    newNode->next = head->next ;
    head->next = newNode ;
}


int search_value_unique (Node *head , int val){
    int pos = 1 ;
    while(head != NULL) {
       
        if(head->value == val){
            return pos ;
        }
        head = head->next ;
        pos++;

    }

    return -1 ;

}

void find_value_cout(Node *head , int val){
    int pos = 1 ;
    bool flag = false ;
 //   cout<<"Y"<<endl;
    while(head != NULL){
       // cout<<"Y in"<<endl;
        flag = true ;
        if(val == head->value){
            
            cout<<pos<<" ";
          //  cout<<"Y in if"<<endl;
           
        }
        head = head ->next ;
        pos ++;
    }
    if(!flag){
        cout<<"Not Found at list ";
    }

}

void find_val_arr (Node * head , int val){

    int sz = print_length_of_linked_list(head);
    int positions [sz+1] ={0};
   // cout<<sz<<endl;
    positions[0]= sz ;
    int pos = 1 ;
    bool flag = false ;
    int k =1 ;

    while(head != NULL){
        if(head->value == val){
            flag = true ;
           // cout<<"Y in"<<endl;
            positions[k] = pos ;
           
           k++;
        }
        head= head->next ;
        pos++ ;
    }

    cout<<"Y-while-done"<<endl;

    if(!flag){
        cout<<"Not Found yet !!"<<endl;
    }

    for(int i=1 ; i<k ; i++){

        cout<<positions[i]<<" ";
       // cout<<"Y-for"<<endl;
    }


}

Output_arr find_val_return_struct (Node *head , int val){
  //  int size = print_length_of_linked_list(head);
    // init the structure 
    Output_arr out ;
  
    out.poses[0]= 0 ;
    int k=1 ;
    int pos = 1 ;

    while(head != NULL){
        if(head->value == val){
            out.poses[k]=pos ;
            k++ ;
        }
        head = head->next ;
        pos ++;

    }
      out.sz = k ;

    return out ;


}


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

void delete_tail (Node *head) {
    Node *temp = head ;
    if(head == NULL){
        cout<<"There is no value in linked list yet !!"<<endl;
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



int main (){

    int ch ;
    cout<<"Choice 0 to exit"<<endl
        <<"1 to head insert"<<endl
        <<"2 to tail insert"<<endl
        <<"3 to specific position"<<endl
        <<"4 to find value"<<endl
        <<"5 to find the value in duplicate list"<<endl
        <<"6 to find the value in duplicate list (array)"<<endl
        <<"7 to find the value in duplicate list (structure)"<<endl
        <<"8 to insert a value to the specific value "<<endl
        <<"9 delete at head  "<<endl
        <<"10 delete at tail  "<<endl;
    cin>>ch ;

    Node * head = nullptr ;



    while(ch!=0){
      
       
        if(ch ==1){
            cout<<"Enter tha value "<<endl;
            int val ;
            cin>>val ;
            insert_at_head(head , val);
        }
        else if (ch ==2){
            cout<<"Enter tha value "<<endl;
            int val ;
            cin>>val ;
            insert_at_tail(head , val);
        }
        else if (ch ==3){
            cout<<"Enter tha position "<<endl;
            int pos ;
            cin>>pos ;
            cout<<"Enter tha value "<<endl;
            int val ;
            cin>>val ;
            add_to_specific_pos(head , pos , val);

        }
        else if (ch ==4){
           cout<<"Enter tha value for search (Unique)"<<endl;
           int val ;
           cin>>val ;
           int res =  search_value_unique(head , val);
           if(res == -1){
                cout<<"Not found !!"<<endl ;

           }
           else {
                cout<<"Found at "<<res<<endl;
           }

        }

        else if (ch ==5){
            cout<<"Enter tha value for search (Duplicated)"<<endl;
            int val ;
            cin>>val ;

            // fun call 
            find_value_cout(head, val) ;


        }

        else if (ch == 6 ) {
            cout<<"Enter tha value for search (Duplicated) array"<<endl;
            int val ;
            cin>>val ;
            find_val_arr(head, val);


        }

        else if (ch == 7 ) {
            cout<<"Enter tha value for search (Duplicated) array"<<endl;
            int val ;
            cin>>val ;
            Output_arr res  = find_val_return_struct(head , val);
            if(res.sz ==1){
                cout<<"Not found yet !!"<<endl;
            }
            else {
                for(int i =1 ; i< res.sz ; i++ ){
                cout<<res.poses[i]<<" ";
                }
            }

            
            
            


        }

        else if(ch ==8){
            cout<<"Enter the value you want to insert"<<endl;
            int value ;
            cin>>value ;
            cout<<"Enter the specific value , after you insert"<<endl;
            int search_value ;
            cin>>search_value;
            // find the position of the search value 
            int pos = search_value_unique(head , search_value);
            if(pos == -1){
                cout<<"the value is not found"<<endl ;
            }
            else {
                // insert the pos +1 at 
                add_to_specific_pos(head , pos+1 , value);
            }

           


        }
        else if(ch==9){
            delete_head(head);
        }
        else if (ch ==10){
            delete_tail(head);
        }
       
        cout<<"enter the choice again "<<endl;
        cin>>ch ;

       
    }

    cout<<"Done inserting on Linked List"<<endl
        <<"Print it"<<endl;
    print_all_node_values(head);
    cout<<endl;
    cout<<"length is "<<print_length_of_linked_list(head)<<endl;


}