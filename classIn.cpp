#include<bits/stdc++.h>
using namespace std ;


class Parent {
private:
    int z ;
protected :
    int y;
public :
    int x ;
    Parent (int a , int b , int c ) {

        x = a;
        y =b ;
        z = c ;

    }
};


class Child : public Parent {

public :
    int xx ;
    Child (int aa , int a , int b , int c ) : Parent(a, b, c ){

        xx =aa ;
    }

    void need_protected (){

        cout<<"protected data : "<<y ;

    }




};


int main (){

    Parent pt (10, 20, 30);
    Child ch (100, 110 , 120, 130);

   //ch.need_protected();
   cout<<ch.x;



}
