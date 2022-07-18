#include<bits/stdc++.h>
using namespace std ;


class Student {

private :
    int pass ;
    int age ;

public :
    int roll ;
    int id ;

     Student (int a , int b, int p){
        roll = a ;
        id =b ;
        pass = p ;

    }


    int getter_age(int p ){

        if(p==pass) {
            return age ;
        }
        else {
            return -1 ;
        }


    }

    void settter_age (int p , int a ) {
        if(p ==pass) {
            age = a ;
        }
        else {
            cout<<"pass did not match " ;

        }

    }




     void  setter(char * n) {

        strcpy(gf, n);


    }

   char * getter() {

       return gf ;

    }
protected :
    int i ;
    char gf[100];



};

int main (){


    Student bitue (12, 100, 1234);

    cout<<bitue.roll<< " " <<bitue.id <<endl;

    bitue.setter("farha");

    char * name_of_gf = bitue.getter();

    cout<<name_of_gf;

    bitue.settter_age(1234, 24);
    cout<<bitue.getter_age(1234);


}
