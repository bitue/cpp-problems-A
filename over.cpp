#include<bits/stdc++.h>
using namespace std ;

class Base {

public :
   void  print(){

       cout<<"base class function"<<endl;


    }


};


class Derived : public Base  {

public :
    void print(){

        cout<<"Derived class function"<<endl;


    }



};

int main (){


    Derived d1, d2 ;
   // d1.print(); // simply form the derived class
    d2.Base::print(); // function overriding here


}
