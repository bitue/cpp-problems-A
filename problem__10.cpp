#include<bits/stdc++.h>
#include"stack_temp.h"
using namespace std ;

class Person {
      public :
        string fName ;
        string lName ;
        int age ;

    
        Person( string first , string last, int age ){
                this->age= age;
                this->fName = first ;
                this->lName =last ;

        }



};

int main (){

    // Stack<Person> s ;
    // Person me ("Ashikul ", "Islam", 23);
    // Person ne ("Ashikul ", "Islam", 23);
    // Person pe ("Ashikul ", "Islam", 23);

    // s.push(me);
    // s.push(ne);
    // s.push(pe);

    // while(!s.is_empty()){
    //    Person m = s.Top();
    //    cout<<m.fName<<endl;
    //     s.pop();

    // }

    Stack<float> s ;
    s.push(1.5);
      s.push(1.5);
        s.push(1.5);

    while(!s.is_empty()){
        cout<<s.Top()<<endl;
        s.pop();

     }





}