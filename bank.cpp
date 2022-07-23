#include<bits/stdc++.h>
using namespace std ;

class Bank_Accout {
public :
    string accout_holder ;
    int age ;
    string address ;
    int accout_number ;



protected:
    int account_balance;
private :
     string password ;
public :
    Bank_Accout (string accout_holder , int age , string address , string password ){

        this->accout_holder = accout_holder ;
        this->age = age ;
        this->address = address ;
        this->password = password;
        this->account_balance = 0 ;
        this->accout_number = rand()%1000000000;
        cout<<"Successfully account created ! A/C - "<<this->accout_number<<endl;


    }

    void get_balance (string pass) {
        if(this->password == pass) {
            cout<<"your balance is "<<this->account_balance <<endl;
        }
        else {
            cout<<"password didnot matched !!" <<endl;
        }

    }

    void deposit_money (string pass , int money ) {

        if(money <0 ) {
            cout<<"Invalid ammount"<<endl;
            return ;
        }

        if(this->password == pass) {
            this->account_balance+=money ;
            cout<<"Add money successful " <<money<<"$ added"<<endl;

        }
        else {
            cout<<"Password did not match !!"<<endl;
        }


    }

    void debit_money_f (string pass , int ammount) {

        if(ammount <0 ) {
            cout<<"Invalid ammount"<<endl;
            return ;
        }

        if(ammount > this->account_balance ) {
            cout<<"Insufficient balance "<<endl;
            return ;
        }

        if(this->password == pass) {
            this->account_balance -=ammount ;
            cout<<"successfully debited money"<<ammount <<"from you account"<<endl;

        }
        else {
            cout<<"password did not matched here !!"<<endl;
        }


    }


    friend class Bkash_app ;



};


class Bkash_app {

public :
    int app_balance ;
    Bkash_app(){
        app_balance =0 ;


    }

    int get_app_balance () {

        return app_balance ;

    }

    void add_from_bank (string pass , int ammount , Bank_Accout * acc ) {
        if(ammount <0 ) {
            cout<<"Invalid ammount"<<endl;
            return ;
        }

        if(ammount > acc->account_balance ) {
            cout<<"In sufficient balance"<<endl;
            return ;
        }
        if(acc->password == pass ) {
            this->app_balance += ammount ;
            acc->account_balance -=ammount ;
            cout<<"successfully added account balance in app"<<ammount <<endl;
        }
        else {
            cout<<"password didnot matched !!"<<endl;
        }


    }





};

Bank_Accout * create_account (){
    cout<<"CREATE ACCOUNT NOW !!"<<endl;
    string accout_holder ,  address ,password ;
    int age ;
    cout<<"accout_holder => age => address => password "<<endl;
    cin>>accout_holder>>age >>address >> password ;

    Bank_Accout * my_account ;

    my_account = new Bank_Accout (accout_holder, age , address, password  );


    return my_account ;


}

void show_balance (Bank_Accout *acc){

    string pass ;
    cout<<"enter the password"<<endl;
    cin>>pass ;

    acc->get_balance(pass) ;



}

void add_money (Bank_Accout *acc) {

   // cout<<"ADD MONEY "<<endl;
    cout<<"Enter the password and money"<<endl;

    string pass ;
    int money ;
    cin>>pass>>money ;

    acc->deposit_money(pass, money);




}

void debit_money (Bank_Accout * acc){

    cout<<"Enter pass and debit money to debit" <<endl;

    string pass ;
    int ammount ;
    cin>>pass>>ammount ;

    acc->debit_money_f(pass, ammount);


}


void bikash_app_add_money (Bank_Accout *acc ,Bkash_app * app)  {

    string pass ;
    int ammount ;
    cout<<"Enter the pass and ammount to debit money form bank"<<endl;

    cin>>pass>>ammount ;
    app->add_from_bank(pass, ammount , acc);



}

void print_options () {

    cout<<"WELLCOME TO PRIME BANK LTD"<<endl;
    //cout<<"1 => Create Accout"<<endl;
    cout<<endl;
    cout<<"1 => Add Money"<<endl;
    cout<<endl;
    cout<<"2 => Show Balance"<<endl;
    cout<<endl;

    cout<<"3=> Debit money from Bank"<<endl;
    cout<<endl;
    cout<<"4=> Bkash app for Debit money from Bank"<<endl;
    cout<<endl;
    cout<<"5=> App Balance quick"<<endl;
    cout<<endl;
    cout<<"0=> Quit "<<endl;


    cout<<"Choose from the above "<<endl;


}

int main (){

    Bank_Accout * my_acc ;
    Bkash_app *app_acc ;

     my_acc = create_account();
    app_acc = new Bkash_app();

    while(true) {
        int i ;
        cout<<"Enter the option :"<<endl ;
        print_options();


        cin>>i ;
        if(i==0) {
            break;
        }


        if(i==1) {
            cout<<"ADD MONEY"<<endl;
            add_money(my_acc);

        }
         if(i==2) {
            cout<<"Show balance"<<endl;
            show_balance(my_acc);

        }
        if(i==3) {
            cout<<"debit money from Bank"<<endl;
            debit_money(my_acc);

        }
        if(i==4) {
               cout<<"Bkash app for debit money " <<endl;

               bikash_app_add_money (my_acc , app_acc) ;

        }
        if(i==5) {
                cout<<"app balance is  "<<app_acc->get_app_balance()<<endl;
        }
    }
    cout<<endl;



}
