#include<bits/stdc++.h>
#include"ASHIK_STACK.h"
using namespace std ;


class Person {
 
    string name ;
    float salary ;

    public :
        Person(){
          
            this->name ="";
            this->salary= -1.0;
        }

        void setName (string name){
            this->name = name ;

        }
        void setSalary (float salary){
            this->salary = salary ;
        }

        Person (string name , float salary ){
            setName(name);
            setSalary(salary);

        }

       
        float getSalary (){
            return this->salary ;
        }
        string getName (){
            return this->name ;
        }

        void print(){
            cout <<" | "<< this->name<<" | "<< this->salary<<endl;
        }

};

int main (){

    Stack<Person> st ;
    Person p("7", 1233.67);
     Person q(" 6", 1233.67);
      Person r(" 5", 1233.67);
       
       Person m("4", 122.44);

       Person a("3", 1233.67);
     Person b(" 2", 1233.67);
      Person c(" 1", 1233.67);
    st.push(p);
    st.push(q);
    st.push(r);
    
    st.push(m);

    st.push(a);
    st.push(b);
     st.push(c);

  

    cout<<"Y"<<endl;

    Person res = st.mid();
    res.print() ;

     // cout<<"Y"<<endl;

    // while(!st.is_empty()) {
    //     Person res = st.Top();
    //     st.pop();
    //     res.print();

    // }


   

}