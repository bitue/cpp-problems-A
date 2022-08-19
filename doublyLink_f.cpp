#include<bits/stdc++.h>
using namespace std ;

class DoubleLink {

    public :
        int value ;
        DoubleLink * prev ;
        DoubleLink * next ;

        DoubleLink (int val){
            this->prev = NULL;
            this->value =  val ;
            this -> next = NULL;
        }
   
};

struct Result {
    int size ;
    int positions[1000];
};


int count_length (DoubleLink *head ) {
    int l =0 ;
    if(head == NULL){
        return l;
    }
    while(head != NULL){
        head = head->next ;
        l++;

    }
    return l;
}

void display (DoubleLink *head ) {
    if (head == NULL) {
        cout<<"No value in the linked list yet";
        return ;
    }

    while(head != NULL){
        if(head->next == NULL){
            cout<<head->value;
        }
        else {
            cout<<head->value<<"<=>";
        }
        head = head -> next ;
    }

}

void insertion_at_head (DoubleLink *&head , int val){
    DoubleLink * newNode = new DoubleLink(val);
    DoubleLink *temp = head ;
    if(head == NULL){
        head = newNode ;
        return ;
    }
    temp->prev = newNode ;
    newNode->next = temp ;
    head = newNode ;

}

void insertion_at_tail (DoubleLink *&head , int val){
    DoubleLink * newNode = new DoubleLink(val);
    if(head == NULL){
        head = newNode;
        return ;

    }
    DoubleLink * temp = head ;
    while(temp ->next != NULL){
        temp = temp ->next ;
    }
    temp->next = newNode ;
    newNode->prev = temp;


}

void insertion_at_specific_pos(DoubleLink *&head , int val , int pos){
    DoubleLink *temp = head ;
    DoubleLink * newNode = new DoubleLink(val);

    if(pos == 1 ) {
        insertion_at_head(head, val);
        return ;
    }
    int len = count_length(head);
    if(pos == len+1){
        insertion_at_tail(head, val);
        return ;
    }

    for(int i =1 ; i< pos-1 ; i++){
        temp= temp->next ;

    }
    // connection to newNode 
    newNode->next = temp->next ;
    newNode->prev = temp ;
    // connection to temp -> next 
    temp->next->prev = newNode ;
    temp->next = newNode;





}

int search_value (DoubleLink *&head , int val) {
    DoubleLink * temp = head;
    int k =1 ;
    while(temp != NULL){
        if(temp->value == val){
            return k;

        }
        temp= temp->next ;
        k++;
    }

    return -1;

}

Result search_value_duplicate_list (DoubleLink *&head , int val){

    DoubleLink * temp = head ;
    Result response ;
    response.positions[0]= 0 ;
    int k = 1 ;
 
    int len = count_length(head) ;
    for(int i=0 ; i<len ; i++){
        if(temp->value == val){
            response.positions[k]= i+1 ;
            k++;

        }
        temp= temp->next;
      
    }
    response.size= k;

    return response ;

}

void deletion_at_head (DoubleLink *&head) {
    DoubleLink * temp = head ;
    
    temp->next->prev = NULL ;
    head = temp->next;
    temp->next = NULL;
    delete temp ;
   
}

void deletion_at_tail (DoubleLink*&head){
    DoubleLink *temp = head ;
    while(temp ->next->next != NULL){
        temp= temp->next;
    }
    DoubleLink *dellNode = temp->next ;
    temp->next = NULL ;
    delete dellNode;


}

void deletion_at_pos (DoubleLink *&head , int pos){
    DoubleLink * temp = head ;
  

    if(pos ==-1){

        cout<<"Not Found this value"<<endl;
        return ;
    }
    if(pos == 1){
  
        deletion_at_head(head);

        return ;
    }
    if(pos == count_length(head)) {
        cout<<"3"<<endl;
        deletion_at_tail(head);
        return ;
    }
    for(int i=1 ; i<pos-1 ; i++){
         cout<<"for"<<endl;
        temp= temp->next ;
    }
   
    DoubleLink *dellNode = temp->next ;
    DoubleLink *upNode = dellNode->next;

    temp->next = upNode ;
    upNode->prev = temp ;
    delete dellNode ;



}





int main (){
    int ch ;
    cout<<"0 for exit"<<endl
        <<"1 for Counting the size"<<endl
        <<"2 for display"<<endl
        <<"3 insert at head"<<endl
        <<"4 insert at tail"<<endl
        <<"5 insert at specific position "<<endl
        <<"6 search a value "<<endl
        <<"7 search a value (Duplicate enabled list) "<<endl
        <<"8 insertion after a specific value  "<<endl
        <<"9 insertion after a specific value (Duplicate enabled list)  "<<endl
        <<"10 Deletion at head  "<<endl
        <<"11 Deletion at tail  "<<endl
        <<"12 Deletion by specific value  "<<endl
        <<"13 Deletion by specific value (Duplicate enabled list)  "<<endl;



    
    cin>>ch;

    DoubleLink *head = NULL ;

    while(ch != 0){
        if(ch == 1){
           int res =  count_length(head); 
            if(!res) {
                cout<<"No value found"<<endl;
            }
            else {
                cout<<"Length : "<<res<<endl;
            }
        }
        else if(ch == 2){
            display(head);
        }
        else if(ch == 3) {
            int val;
            cout<<"Enter the value"<<endl;
            cin>>val;
            insertion_at_head(head, val);

        }
        else if(ch == 4 ){
            int val;
            cout<<"Enter the value"<<endl;
            cin>>val;
            insertion_at_tail(head, val);
            
        }

        else if(ch == 5 ){
            int val ;
            cout<<"enter the value "<<endl;
            cin>>val;
            int pos ;
            cout<<"Enter the position "<<endl;
            cin>>pos;
            insertion_at_specific_pos(head , val, pos);


        }

        else if(ch == 6 ) {
            int val ;
            cout<<"the value you want to search"<<endl;
            cin>>val;
            int res = search_value(head , val);
            if(res) {
                cout<<"Position at : "<<res<<endl;

            }
            else{
                cout<<"NOT FOUND"<<endl;
            }

        }

        else if(ch == 7){
            int val ;
            cout<<"the value you want to search"<<endl;
            cin>>val;

            Result res ;
            res = search_value_duplicate_list(head , val);
            for(int i=1 ; i<res.size; i++){
                cout<<res.positions[i]<<" ";
            }
        }

        else if(ch == 8){
            int s_val ;
            cout<<"Enter the search  value "<<endl;
            cin>>s_val;

            int val ;
            cout<<"The value u want to insert"<<endl;
            cin>>val;

            int pos = search_value(head , s_val);
            
            if(pos == -1){
                cout<<"This value is not yet in the list "<<endl;
                
            }
            else {
                 insertion_at_specific_pos(head, val,  pos + 1);

            }
           

        }

        else if(ch ==9){
            int s_val ;
            cout<<"Enter the search  value "<<endl;
            cin>>s_val;

            int val ;
            cout<<"The value u want to insert"<<endl;
            cin>>val;

            Result res ;
            res = search_value_duplicate_list(head, s_val);
            int co =0 ;
            for(int i=1 ; i<res.size ; i++){
                insertion_at_specific_pos(head, val, res.positions[i] + co + 1) ;
                co++;
            }


        }

        else if(ch == 10){
            deletion_at_head(head);

        }
        else if(ch == 11){
            deletion_at_tail(head);

        }
        else if(ch == 12){
            int val;
            cout<<"Enter the deleted value"<<endl;
            cin>>val;
            int pos = search_value(head, val);
            cout<<"pos : "<<pos<<endl;
            deletion_at_pos(head, pos);


        }
        else if(ch==13){
            int val;
            cout<<"Enter the deleted value"<<endl;
            cin>>val;
            Result res ;
            res = search_value_duplicate_list(head, val);
            int sz = res.size ;
            int co=0 ;
            for(int i =1 ; i<sz ; i++){
                cout<<res.positions[i]<<" ";
                deletion_at_pos(head, res.positions[i]-co);
                co++;

            }

        }



        cout<<endl;
        
        cout<<"Enter the choice again "<<endl;
        cin>>ch;

    }
    cout<<"Done"<<endl;
}