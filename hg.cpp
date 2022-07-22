#include<bits/stdc++.h>
using namespace std ;




class Baba {

protected :
    int age ;
private:
    int passport ;
public :
    Baba (int a , int b){

        age = a;
        passport = b ;

    }

    friend class Baba_Bondhu ;
    friend void tell_secret_fun (Baba *ptr );



};


class Baba_Bondhu {
    public:

        void tell_secret (Baba *ptr){

            cout<<ptr->age<<" "<<ptr->passport<<" "<<endl;

        }



};


void tell_secret_fun (Baba *ptr ) {

    cout <<ptr->passport<<" passport"<<endl;


}


int main (){


    Baba baba (56, 1234);
    Baba_Bondhu moin ;

   // moin.tell_secret(&baba);

   tell_secret_fun(&baba);


}
