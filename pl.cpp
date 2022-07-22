#include<bits/stdc++.h>
using namespace std ;

class Fun {

public :
    int div (int a , int b){

        int res = a /b ;
        return res ;


    }

    double div (double a , double b) {

        double res = a/b ;

        return res ;


    }

    void div (char * a) {

        cout<<"hi "<<a <<endl;



    }


};

int main (){

    Fun fu ;

    fu.div("bitue");


}
